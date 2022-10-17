class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>m;
        for(auto x: sentence)m[x]++;
        return m.size()>=26;
    }
};