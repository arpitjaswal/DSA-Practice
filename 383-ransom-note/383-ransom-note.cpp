class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        int count=0;
        for(auto x:ransomNote){
            m[x]--;
        }
        for(auto y:magazine){
            m[y]++;
        }
        for(auto x:m){
            if(x.second<0)return false;
        }
        //if(count==ransomNote.length())return true;
        return true;
    }
};