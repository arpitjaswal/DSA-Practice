class Solution {
public:
    bool isNStraightHand(vector<int>& a, int k) {
        //base case
        if(a.size()%k!=0)return false;
        
        map<int,int>m;
        //store
        for(auto x: a){
            m[x]++;
        }
        
        for(auto [key,value]:m){
            while(m[key]){
                for(int i=key; i<key+k; i++){
                    m[i]--;
                    if(m[i]<0)return false;
                }
            }
        }
        return true;
    }
};