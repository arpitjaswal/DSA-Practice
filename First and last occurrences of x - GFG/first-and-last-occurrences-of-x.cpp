// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
  vector<int>ans(2,-1);
    int i1=0;
    int j1=n-1;
    int ans1=-1;
    while(i1<=j1){
        int mid=i1+(j1-i1)/2;
        if(arr[mid]==x){
            ans1=mid;
            j1=mid-1;
        }
        else if(arr[mid]<x)i1=mid+1;
        else 
            j1=mid-1;
    }
    ans[0]=ans1;
    int i2=0;
    int j2=n-1;
    int ans2=-1;
    while(i2<=j2){
        int mid=i2+(j2-i2)/2;
        if(arr[mid]==x){
            ans2=mid;
            i2=mid+1;
        }
        else if(arr[mid]<x)i2=mid+1;
        else 
            j2=mid-1;
    }
    ans[1]=ans2;
  return ans;
}



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends