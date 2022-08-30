class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        // //transpose of the matrix
        // for(int i=0;i<m.size();i++){
        //     for(int j=0;j<i;j++){
        //         swap(m[i][j],m[j][i]);
        //     }
        // }
        // //reverse
        // for(int i=0;i<m.size();i++){
        //     reverse(m[i].begin(),m[i].end());
        // }
        int n=m.size();
        vector<vector<int>>dummy(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dummy[i][j]=m[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m[i][j]=dummy[j][i];
            }
        }
        for(int i=0;i<n;i++){
            reverse(m[i].begin(),m[i].end());
        }
    }
};