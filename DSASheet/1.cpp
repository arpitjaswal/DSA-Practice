// Given an array A of size N of integers.
//  Your task is to find the sum of minimum and maximum element in the array.


#include <iostream>
using namespace std;


void getMinAndMax(int *arr, int n){
    int mini = arr[0];
    int maxi = arr[0];

    for(int i=0;i<n;i++){
        if(mini>arr[i])mini=arr[i];
        if(maxi<arr[i])maxi=arr[i];
    }
    cout<<"Minimum element of the array is: "<<mini<<endl;
    cout<<"maximum element of the array is: "<<maxi<<endl;
}

int main(){
    int arr[]={4,244444,4,2,-2,-33334,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    getMinAndMax(arr,n);
    return 0;
}