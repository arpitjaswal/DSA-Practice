#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&nums){
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(nums[j]<nums[j+1])swap(nums[j+1], nums[j]);
        }
    }
}

int main(){
    vector<int>unsortedArray = {4,3,4,3,3,4,43,3};
    
    cout<<"initial array was: ";
    for(int x:unsortedArray)cout<<x<< " ";
    cout<<endl;
    bubbleSort(unsortedArray);
    cout<<"sorted array was: ";
    for(int x:unsortedArray)cout<<x<< " ";
    cout<<endl;

    return 0;
}