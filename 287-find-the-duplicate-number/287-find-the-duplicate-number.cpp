class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int freq[100001]={0};
        for(int i=0;i<100001;i++){
            if(freq[nums[i]]==0)freq[nums[i]]++;
            else
                return nums[i];
        }
        return 0;
    }
};