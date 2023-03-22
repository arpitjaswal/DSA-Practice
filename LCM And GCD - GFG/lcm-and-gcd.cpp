//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    int gcdfinder(long long A, long long B){
        if(A==0)return B;
        return gcdfinder(B%A, A);
    }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long>ans(2);
        long long gcd = gcdfinder(A,B);
        long long lcm = (A*B)/gcd;
        ans[0]=lcm;
        ans[1]=gcd;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends