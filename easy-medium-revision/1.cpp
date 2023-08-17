// Find the smallest element in an array
// Problem Statement: Given an array, we have to find the smallest element in the array.

// Examples:

// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 0
// Explanation: 0 is the smallest element in the array. 

// Example2: 
// Input: arr[] = {8,10,5,7,9};
// Output: 5
// Explanation: 5 is the smallest element in the array.

#include<bits/stdc++.h>
using namespace std;

void smallestElement(int arr[], int n){
    int mini = arr[0];
    for(int i=0;i<n;i++){
        if(mini>arr[i])mini=arr[i];
    }
    cout<<"Smallest number: "<<mini<<endl;
}

int main(){
    int arr1[]={2,5,1,3,0};
    int arr2[]={8,10,5,7,9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    smallestElement(arr1,n);
    smallestElement(arr2,n);

    return 0;
}