class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int col=mat[0].size();
        if(row*col<r*c || row*col>r*c)return mat;
        vector<vector<int>>twod(r,vector<int>(c,0));
        vector<int>s;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                s.push_back(mat[i][j]);
            }
        }
        int k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                twod[i][j]=s[k];
                k++;
            }
        }
        return twod;
    }
};