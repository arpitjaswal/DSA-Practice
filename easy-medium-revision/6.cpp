// Rearrange array in increasing-decreasing order
// Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

// Examples:

// Example 1:
// Input: 8 7 1 6 5 9
// Output: 1 5 6 9 8 7
// Explanation: First three elements are in the ascending order and next three elements are in the descending order.

// Example 2:
// Input: 4 2 8 6 15 5 9 20
// Output: 2 4 5 6 20 15 9 8
#include<bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n){
    cout<<"Original Array: "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+n);
    vector<int>ans;
    for(int i=0;i<n/2;i++){
        ans.push_back(arr[i]);
    }
    for(int i=n-1;i>=n/2;i--){
        ans.push_back(arr[i]);
    }

    
    cout<<"Rearranged array: "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {8,7,1,6,5,9};
    int arr2[] = {4,2,8,6,15,5,9,20};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    arrange(arr,n1);
    arrange(arr2,n2);
    return 0;
}