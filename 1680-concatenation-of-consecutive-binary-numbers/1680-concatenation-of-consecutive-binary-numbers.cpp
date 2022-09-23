class Solution {
private:
    int BitLength(int n){
        return log2(n)+1;
    }
public:
    int concatenatedBinary(int n) {
        long ans=0;
        int mod=1000000007;
        
        for(int i=1;i<=n;i++){
            ans=((ans<<BitLength(i))%mod+i)%mod;
        }
        return ans;
    }
};