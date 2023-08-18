
// Find the Largest element in an array
// Problem Statement: Given an array, we have to find the largest element in the array.

// Examples
// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 5
// Explanation: 5 is the largest element in the array. 

// Example2: 
// Input: arr[] = {8,10,5,7,9};
// Output: 10
// Explanation: 10 is the largest element in the array. 

#include<bits/stdc++.h>
using namespace std;

void largest(int arr[], int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi)maxi=arr[i];
    }
    cout<<"Largest number is: "<<maxi<<endl;
}

int main()
{
    int arr1[] = {2,5,1,3,0};
    int arr2[] = {8,10,5,7,9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    largest(arr1,n);
    largest(arr2,n);
    return 0;
}