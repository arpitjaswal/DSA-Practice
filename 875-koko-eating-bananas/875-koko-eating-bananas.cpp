class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=1e9,total=0;
        while(l<r){
            int mid=l+(r-l)/2;
            total=0;
            for(auto x: piles){
                total+=(x+mid-1)/mid;
            }
            if(total>h)l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};