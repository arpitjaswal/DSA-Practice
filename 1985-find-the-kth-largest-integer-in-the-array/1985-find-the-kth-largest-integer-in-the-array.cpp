class Solution {
private:
    static bool c(string &a, string &b){
        if(a.size()==b.size()){
            return a<b;
        }
        else
            return a.size()<b.size();
    }
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        // int n=nums.size();
        // vector<int>inte;
        // for(int i=0;i<n;i++){
        //     int temp=stoi(nums[i]);
        //     inte.push_back(temp);
        // }
        // sort(inte.begin(), inte.end());
        // string tempo="";
        // tempo+=to_string(inte[k]);
        // return tempo;
        int n=nums.size();
        sort(nums.begin(), nums.end(), c);
        return nums[n-k];
    }
};