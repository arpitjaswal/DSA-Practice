// Find Second Smallest and Second Largest Element in an array
// Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

// Examples
// Example 1:
// Input: [1,2,4,7,7,5]
// Output: Second Smallest : 2
// 	Second Largest : 5
// Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

// Example 2:
// Input: [1]
// Output: Second Smallest : -1
// 	Second Largest : -1
// Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.

#include<bits/stdc++.h>
using namespace std;
void second(vector<int>&arr){
    int maxi = INT_MIN;
    int maxi2 = INT_MIN+1;
    int mini = INT_MAX;
    int mini2 = INT_MAX-1;
    int n = arr.size();
     if(n<2){
        cout<<"-1"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi2=maxi;
            maxi=arr[i];
        }
        else if(arr[i]>maxi2  && arr[i] != maxi)maxi2=arr[i];

        if(arr[i]<mini){
            mini2=mini;
            mini=arr[i];
        }
        else if(arr[i]<mini2 && arr[i] != mini)mini2=arr[i];
    }
    cout<<"2nd largest: "<<maxi2<<endl;
    cout<<"2nd smallest: "<<mini2<<endl;
}
void second2(int arr[], int n){
    if(n<2){
        cout<<"-1"<<endl;
        return;
    }
    int maxi = INT_MIN;
    int maxi2 = INT_MIN+1;
    int mini = INT_MAX;
    int mini2 = INT_MAX-1;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi)maxi=arr[i];
        else if(arr[i]>maxi2  && arr[i] != maxi)maxi2=arr[i];

        if(arr[i]<mini)mini=arr[i];
        else if(arr[i]<mini2 && arr[i] != mini)mini2=arr[i];
    }
    cout<<"2nd largest: "<<maxi2<<endl;
    cout<<"2nd smallest: "<<mini2<<endl;
}
int main()
{
    vector<int>v{1,2,4,7,7,5};
    int arr[] = {1};
    int n = sizeof(arr)/sizeof(arr[0]);
    second(v);
    second2(arr,n);
    return 0;
}