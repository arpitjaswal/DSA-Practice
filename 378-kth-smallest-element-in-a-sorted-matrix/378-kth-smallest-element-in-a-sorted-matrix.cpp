class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>>p;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(p.size()<k){
                    p.push(matrix[i][j]);
                }
                else{
                    if(p.top()>matrix[i][j]){
                        p.pop();
                        p.push(matrix[i][j]);
                    }
                }
            }
        }
        return p.top();
    }
};