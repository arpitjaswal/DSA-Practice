class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(), col=matrix[0].size(), l=0, r=row*col-1;
        while(l!=r){
            int mid=l+(r-l)/2;
            if(matrix[mid/col][mid%col]==target)return true;
            else if(matrix[mid/col][mid%col]<target)l=mid+1;
            else
                r=mid;
        }
        if(matrix[r/col][r%col]==target)return true;
        else
            return false;
    }
};