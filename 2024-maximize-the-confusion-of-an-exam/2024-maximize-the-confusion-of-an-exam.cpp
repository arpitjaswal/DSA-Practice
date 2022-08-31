class Solution {
private:
    bool isPossible(string s, int mid, int k){
        int t=0,f=0;
        for(int i=0;i<mid;i++){
            t+=(s[i]=='T');
            f+=(s[i]=='F');
        }
        if(t<=k || f<=k)return true;
        int n=s.length();
        int l=0,h=mid-1;
        while(h<n-1){
            t-=(s[l]=='T');
            f-=(s[l]=='F');
            l++;
            h++;
            t+=(s[h]=='T');
            f+=(s[h]=='F');
             if(t<=k || f<=k)return true;
        }
        return false;
    }
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n=s.length();
        int l=1,h=n;
        int ans=l;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(isPossible(s,mid,k)){
                ans=mid;
                l=mid+1;
            }
            else
                h=mid-1;
        }
        return ans;
    }
};