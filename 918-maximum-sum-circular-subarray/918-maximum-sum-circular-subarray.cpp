class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curMax=0,curMin=0,n=nums.size(),total=0,MaxSum=nums[0],MinSum=nums[0];
        for(auto a:nums){
            total+=a;
            curMin=min(curMin+a,a);
            MinSum=min(MinSum,curMin);
            curMax=max(curMax+a,a);
            MaxSum=max(MaxSum,curMax);
        }
        return MaxSum>0?max(MaxSum,total-MinSum):MaxSum;
    }
};