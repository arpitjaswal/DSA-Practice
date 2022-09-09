
class Solution {
    
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size(),count=-1;
        if(n==0)return 0;
        sort(intervals.begin(),intervals.end(),[] (vector<int>&a, vector<int>&b) {return a[1]<b[1];});
        vector<int>prev;
        prev=intervals[0];
        for(auto x: intervals){
            if(prev[1]>x[0])count++;
            else
                prev=x;
        }
        return count;
    }
};