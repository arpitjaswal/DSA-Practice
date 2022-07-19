class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int r=matrix.size();
        // int c=matrix[0].size();
        // vector<vector<int>>temp=matrix;
        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         if(temp[i][j]==0){
        //         for(int k=0;k<r;k++){
        //             matrix[k][j]=0;
        //         }
        //         for(int k=0;k<c;k++){
        //             matrix[i][k]=0;
        //         }
        //         }
        //     }
        // }
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int>row(r,-1),col(c,-1);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(row[i]==0 || col[j]==0)matrix[i][j]=0;
            }
        }
    }
};