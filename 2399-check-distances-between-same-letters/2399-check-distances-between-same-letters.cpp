class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
         unordered_map<char,vector<int>>m;
        for(int i=0;i<s.length();i++){
            m[s[i]].push_back(i);
        }
        for(auto x:m){
            if(x.second[1]-x.second[0]-1!=distance[x.first-'a'])return false;
        }
        return true;
    }
};