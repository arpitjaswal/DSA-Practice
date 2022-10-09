class Solution {
public:
    void sortColors(vector<int>& nums) {
        priority_queue<int>p;
        for(auto x: nums)p.push(x);
        //0,0,1,1,2,2
        int i=nums.size()-1;
        while(!p.empty()  && i>=0){
            nums[i--]=p.top();
            p.pop();
        }
    }
};