class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            //return early if it simply not possible jump to current index
            if(i>maxi)return false;
            maxi=max(maxi,i+nums[i]);
        }
        return true;
    }
};