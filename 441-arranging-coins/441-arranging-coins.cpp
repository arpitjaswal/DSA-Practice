class Solution {
public:
    int arrangeCoins(int n) {
        int count=1;
        int comp=0;
        while(n>0){
            n--;
            n-=count;
            count++;
            comp++;
        }
        return comp;
    }
};