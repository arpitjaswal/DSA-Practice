class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for(auto x:strs){
            string temp=x;
            sort(temp.begin(), temp.end());
            m[temp].push_back(x);
        }
        vector<vector<string>>ans;
        for(auto y:m)ans.push_back(y.second);
        return ans;
    }
};