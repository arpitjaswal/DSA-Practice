class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        sort(intervals.begin(),intervals.end());
        result.push_back(intervals[0]);
        int n=intervals.size();
        for(int i=0;i<n;i++){
            vector<int>temp=result.back();
            if(intervals[i][0]>temp[1]){
                result.push_back(intervals[i]);
            }
            else{
                result.back()[1]=max(result.back()[1],intervals[i][1]);
            }
        }
        return result;
    }
};