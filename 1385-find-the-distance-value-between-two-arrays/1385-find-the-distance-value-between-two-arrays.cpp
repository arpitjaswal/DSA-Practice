class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        //sort(arr2.begin(), arr2.end(), greater<>())
        //10,9,8,1
        for(int i=0;i<arr1.size();i++){
            bool f=false;
            for(int j=0;j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j]) <= d)f=true;
            }
            if(!f)count++;
        }
        return count;
    }
};