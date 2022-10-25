class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        //approach: concatenate all the strings present in each array to form two final strings and compare them and return if they are same or not
        string s1, s2;
        for(auto x: word1)s1+=x;
        for(auto x: word2)s2+=x;
        return s1==s2;
    }
};