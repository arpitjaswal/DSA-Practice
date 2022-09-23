class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        string res="";
        unordered_map<char,int>m;
        for(auto x: s){
            m[x]++;
        }
        priority_queue<pair<int,char>>p;
        for(auto v:m){
            p.push(make_pair(v.second,v.first));
        }
        while(!p.empty()){
            int n=p.top().first;
            int c=p.top().second;
            while(n--){
                res+=c;
            }
            p.pop();
        }
        return res;
    }
};