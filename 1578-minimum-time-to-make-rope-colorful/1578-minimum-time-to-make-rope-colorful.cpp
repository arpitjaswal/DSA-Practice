class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.length();
        int i=0;
        int j=0;
        int totaltime=0;
        while(i<n && j<n){
            int maxi=0;
            int sum=0;
            while(j<n && colors[i]==colors[j]){
                maxi=max(maxi,neededTime[j]);
                sum+=neededTime[j];
                j++;
            }
            totaltime+=(sum-maxi);
            i=j;
        }
        return totaltime;
    }
};