class Solution {
public:
    int mySqrt(int x) {
        long long r=0;
        while(r*r<=x)r++;
        return r-1;
    }
};