class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        int i=0;
        int j=0;
        int n1=arr1.size();
        int n2=arr2.size();
        int count=0;
        while(i<n1 && j<n2){
            if(arr1[i]>arr2[j]){
                if(abs(arr1[i]-arr2[j])<=d){
                    count++;
                    i++;
                }
                else
                    j++;
            }
            else{
                if(abs(arr1[i]-arr2[j])<=d){
                    count++;
                    i++;
                }
                else
                    i++;
            }
        }
        return n1-count;
    }
};