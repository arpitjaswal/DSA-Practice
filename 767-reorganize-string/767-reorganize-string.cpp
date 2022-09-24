class Solution {
public:
    string reorganizeString(string s) {
        int n=s.length();
        string res="";
        unordered_map<int,int>m;
        for(auto x: s)m[x]++;
        priority_queue<pair<int,int>>p;
        pair<int,int>top1,top2;
        for(auto y: m){
            p.push({y.second,y.first});
        }
        while(!p.empty()){
            top1=p.top();p.pop();
            res+=top1.second;
            if(!p.empty()){
                res+=p.top().second;
                top2=p.top();
                p.pop();
                if(top2.first>1)p.push({top2.first-1,top2.second});
                
            }
            if(top1.first>1)p.push({top1.first-1,top1.second});
        }
        for(int i=1;i<res.length();i++){
            if(res[i]==res[i-1])return "";
        }
        return res;
    }
};