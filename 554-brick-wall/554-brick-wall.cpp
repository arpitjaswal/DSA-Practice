class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int rows=wall.size(),maxbrickedges=0;
        unordered_map<int,int>edgefreq;
        for(auto row: wall){
            int index=0;
            for(int i=0;i<row.size()-1;i++){
                index+=row[i];
                edgefreq[index]++;
                maxbrickedges=max(maxbrickedges,edgefreq[index]);
            }
        }
        return rows-maxbrickedges;
    }
};