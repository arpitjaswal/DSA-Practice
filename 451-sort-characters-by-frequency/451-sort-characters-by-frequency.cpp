class Solution {
public:
    string frequencySort(string s) {
        string res="";
        unordered_map<char,int>m;
        for(auto x: s){
            m[x]++;
        }
        vector<string>bucket(s.length()+1,"");
        for(auto it: m){
            int n=it.second;
            int c=it.first;
            bucket[n].append(n,c);
        }
        for(int i=s.length();i>0;i--){
            if(!bucket[i].empty()){
                res.append(bucket[i]);
            }
        }
        return res;
    }
};