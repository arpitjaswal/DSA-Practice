//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        deque<int>dq;
        
        //fill the deque with numbers from 1 to N
        for(int i=1;i<=N;i++){
            dq.push_back(i);
        }
        bool left=true;
        
        while(dq.size()>1){
            if(left){
                int i=0;
                while(dq.size()>1 && i<K){
                    dq.pop_front();
                    i++;
                }
            }else{
                int i=0;
                while(dq.size()>1 && i<K){
                    dq.pop_back();
                    i++;
                }
            }
            left=!left;
        }
        return dq.front();
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends