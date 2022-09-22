class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int l=0;
        int r=n-1;
        for(int i=0;i<n;i++){
            if(abs(nums[l])>abs(nums[r]))ans[n-i-1]=nums[l]*nums[l++];
            else
                ans[n-i-1]=nums[r]*nums[r--];
        }
        return ans;
    }
};