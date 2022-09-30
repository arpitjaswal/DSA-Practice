class Solution {
public:
    int smallestEvenMultiple(int n) {
        int original=n;
        int ans=1;
        if(n%2==0){
            while(n%2==0 && n>=original){
                n/=2;
            }
            ans=n*2;
        }
        else{
            ans=n*2;
        }
       return ans; 
    }
};