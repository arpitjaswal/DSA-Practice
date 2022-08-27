class Solution {
private:
    int houserobber(vector<int>&nums, int start, int end){
        int rob1=0,rob2=0;
        for(int i=start;i<end;i++){
            int temp=max(nums[i]+rob1,rob2);
            rob1=rob2;
            rob2=temp;
        }
        return rob2;
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int firstpart=houserobber(nums,0,n-1);
        int secondpart=houserobber(nums,1,n);
        int maxi=max(firstpart, secondpart);
        return max(nums[0],maxi);
    }
};