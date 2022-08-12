class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        //check if we can even divide the given array in the groups of size or not
        if(nums.size()%k!=0)return false;
        
        //store all the elements of the array in an ordered map
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        
        //keep beginning from the first element and storing k sized groups
        for(auto [key,value]:m){
            while(m[key]){
                for(int i=key;i<key+k;i++){
                    m[i]--;
                    if(m[i]<0)return false;
                }
            }
        }
        return true;
    }
};