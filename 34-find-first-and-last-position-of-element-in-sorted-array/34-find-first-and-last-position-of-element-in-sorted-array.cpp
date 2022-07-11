class Solution {
private:
    int firstocc(vector<int> nums, int t, int n){
        int i=0;
        int j=n-1;
        int ans=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==t){
                ans=mid;
                j=mid-1;
            }
            else if(nums[mid]<t)i=mid+1;
            else if(nums[mid]>t)j=mid-1;
        }
        return ans;
    }
    
    int secondocc(vector<int> nums, int t, int n){
        int i=0;
        int j=n-1;
        int ans=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==t){
                ans=mid;
                i=mid+1;
            }
            else if(nums[mid]<t)i=mid+1;
            else if(nums[mid]>t)j=mid-1;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=firstocc(nums,target,n);
        int second=secondocc(nums,target,n);
        vector<int>ans(2,0);
        ans[0]=first;
        ans[1]=second;
        return ans;
    }
};