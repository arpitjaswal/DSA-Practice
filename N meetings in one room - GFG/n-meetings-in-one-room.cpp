//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
    struct meetings{
        int s;
        int e;
        int p;
    };
    static bool cmp(struct meetings x, meetings y){
        if(x.e>y.e)return false;
        else if(x.e<y.e)return true;
        else if(x.p<y.p)return true;
        return false;
    }
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        struct meetings m[n];
        for(int i=0;i<n;i++){
            m[i].s=start[i];
            m[i].e=end[i];
            m[i].p=i+1;
        }
        sort(m,m+n,cmp);
        int limit=m[0].e;
        vector<int>ans;
        ans.push_back(m[0].p);
        for(int i=1;i<n;i++){
            if(m[i].s>limit){
                limit=m[i].e;
                ans.push_back(m[i].p);
            }
        }
        return ans.size();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends