class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        //intialise current max and overall max
        //initialise current min and overall min
        //keep track of total sum upuntil
        //keep adding to curmin and curmax and keep checking max/min of their values
        //at the end, if maxsum is positive, return max of maxsum and total-minsum else just return maxsum
        int curmin=0,curmax=0,maxsum=nums[0],minsum=nums[0],n=nums.size(),total=0;
        for(auto c: nums){
            total+=c;
            curmin=min(curmin+c,c);
            minsum=min(minsum,curmin);
            curmax=max(curmax+c,c);
            maxsum=max(maxsum,curmax);
        }
        return maxsum>0?max(maxsum, total-minsum):maxsum;
    }
};