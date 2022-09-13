class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>dir{{-1,-1},{1,0},{0,1},{1,1},{-1,0},{0,-1},{-1,1},{1,-1}};
        vector<vector<int>>result(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int count=0;
                for(auto d: dir){
                    int p=i+d[0];
                    int q=j+d[1];
                    if(p>=0 && p<m && q>=0 && q<n && board[p][q]==1)count++;
                }
                if(board[i][j]==1){
                    if(count==2 || count==3)result[i][j]=1;
                }
                else{
                    if(count==3)result[i][j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                board[i][j]=result[i][j];
            }
        }
    }
};