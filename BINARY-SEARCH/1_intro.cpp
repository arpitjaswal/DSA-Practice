#include<bits/stdc++.h>
using namespace std;


void searchForTheTarget(int arr[], int n, int t){
    int l = 0;
    int r = n-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid]==t){
            cout<<"target found at "<<mid<<" index!"<<endl;
            return;
        }else if(arr[mid]<t){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<"target not found!"<<endl;
    return;
}

int main(){
    int arr[]={2,3,4,5,6,9,13,23,42,422};
    int target = 42;
    int n = sizeof(arr)/sizeof(arr[0]);
    searchForTheTarget(arr, n, target);
    return 0;
}