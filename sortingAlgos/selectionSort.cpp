#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&nums){
    int n = nums.size();
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[min])min=j;
        }
        swap(nums[min],nums[i]);
    }
}

int main(){
    vector<int>unsortedArray = {4,3,4,3,3,4,43,3};
    
    cout<<"initial array was: ";
    for(int x:unsortedArray)cout<<x<< " ";
    cout<<endl;
    selectionSort(unsortedArray);
    cout<<"sorted array was: ";
    for(int x:unsortedArray)cout<<x<< " ";
    cout<<endl;

    return 0;
}