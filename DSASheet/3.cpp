// 53. Maximum Subarray
// Medium
// 30.1K
// 1.3K
// Companies
// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.



#include<iostream>
#include<climits>
using namespace std;

// void maximumSumSubarray(int *arr, int n){

//     int maxi=INT_MIN;
//     int sum = 0;

//     for(int i=0;i<n;i++){
//         sum+=arr[i];

//         maxi=max(maxi, sum);
//         if(sum<0)sum=0;
//     }
//     cout<<"Maximum sum possible is: "<<maxi;
// }

void maximumSumSubarray(int *arr, int n){

    int maxi=arr[0];
    int sum = 0;

    //keeping trrack of the beiginning and the end of the maximum sum subarray
    int start=0;
    int end=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];

        // maxi=max(maxi, sum);
        // end=i;
        if(sum>=maxi){
            maxi=sum;
            end=i;
        }
        if(sum<0){
            sum=0;
            start=i+1;
        }
    }

    //print the maximum sum subarray

    cout<<"Maximum sum subarray: ";
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={4,3,34,3,2,2,4,32,2,2,-44,-44,-33};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    maximumSumSubarray(arr,n);

    return 0;
}