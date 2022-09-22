class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        priority_queue<pair<int,int>>p;
        unordered_map<int,int>m;
        for(auto x: nums){
            m[x]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            p.push(make_pair(it->second,it->first));
            if(p.size()>m.size()-k){
                res.push_back(p.top().second);
                p.pop();
            }
        }
        return res;
    }
};