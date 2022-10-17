class Solution {
private:
    void dfs(vector<vector<int>>& image, int i, int j, int color, int val){
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j]!=val || image[i][j]==color)return;
        image[i][j]=color;
        dfs(image,i-1,j,color,val);
        dfs(image,i+1,j,color,val);
        dfs(image,i,j-1,color,val);
        dfs(image,i,j+1,color,val);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        dfs(image, sr, sc, color, val);
        return image;
    }
};