//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
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
    int maxMeetings(int start[], int end[], int n)
    {
        struct meetings arr[n];
        for(int i=0;i<n;i++){
            arr[i].s=start[i];
            arr[i].e=end[i];
            arr[i].p=i+1;
        }
        sort(arr,arr+n,cmp);
        vector<int>ans;
        int limit=arr[0].e;
        ans.push_back(arr[0].p);
        for(int i=1;i<n;i++){
            if(arr[i].s>limit){
                limit=arr[i].e;
                ans.push_back(arr[i].p);
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