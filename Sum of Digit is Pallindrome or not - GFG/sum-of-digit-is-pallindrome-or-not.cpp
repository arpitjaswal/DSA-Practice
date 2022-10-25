//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
  int sumofdigits(int n){
      int ans=0;
      while(n!=0){
          int rem=n%10;
          ans+=rem;
          n/=10;
      }
      return ans;
  }
  public:
    int isDigitSumPalindrome(int n) {
        int s=sumofdigits(n);
        int ans=0, original=s;
        //cout<<s<<endl;
        while(s!=0){
          int rem=s%10;
          ans=ans*10+rem;
          s/=10;
      }
      if(original==ans)return 1;
      return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends