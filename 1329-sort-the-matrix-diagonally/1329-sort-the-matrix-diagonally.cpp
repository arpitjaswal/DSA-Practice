class Solution {
private:
    void sortit(vector<vector<int>>&mat,int row, int col, int m, int n){
        int r=row;
        int c=col;
        vector<int>values;
        while(r<m && c<n){
            values.push_back(mat[r][c]);
            r++;
            c++;
    }
        sort(values.begin(),values.end());
       r=row;
       c=col;
        int i=0;
        while(r<m && c<n){
            mat[r][c]=values[i++];
            r++;
            c++;
    }
        
}
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        for(int col=0;col<n;col++){
            sortit(mat,0,col,m,n);
        }
        for(int row=1;row<m;row++){
            sortit(mat,row,0,m,n);
        }
        return mat;
    }
};