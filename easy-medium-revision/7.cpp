// Calculate Sum of the Elements of the Array
// Problem Statement: Given an array, we have to find the sum of all the elements in the array.

// Examples:

// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 15
// Explanation: Sum of all the elements is 1+2+3+4+5 = 15

// Example 2:
// Input:  N=6, array[] = {1,2,1,1,5,1}
// Output: 11
// Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11

#include<bits/stdc++.h>
using namespace std;

void sum(int arr[], int n){
    int sum= 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of this array is: "<<sum<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int arr2[] = {1,2,1,5,1,1};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    sum(arr,n1);
    sum(arr2,n2);

    return 0;
}