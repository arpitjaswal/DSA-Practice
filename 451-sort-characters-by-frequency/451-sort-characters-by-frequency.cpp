class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int>m;
        for(auto x: s){
            m[x]++;
        }
        vector<string>bucket(n+1,"");
        string res="";
        for(auto x: m){
            int n=x.second;
            int c=x.first;
            bucket[n].append(n,c);
        }
        for(int i=n;i>0;i--){
            res+=bucket[i];
        }
        return res;
    }
};