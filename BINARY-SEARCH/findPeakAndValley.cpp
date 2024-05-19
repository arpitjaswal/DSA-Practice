// https://leetcode.com/discuss/interview-question/473801/Facebook-or-Phone-Screen-or-Peak-or-Valley-Problem

// Determine Peak or Valley from an integer array satisfying the following properities.

// At any given point in the array, the difference between two elements is +/- 1.
// Ex. Arr[i] = A [i - 1] is +/- 1.
// There should be only one peak or valley.
// Return the index of the peak or valley from the given integer array.

// Examples:
// Valley - [3, 2, 1, 0, 1] ==> 3
// Peak - [4, 5, 6, 7, 8, 9, 8, 7] ==> 5
// Invalid - [1, 2, 3] or [1, 2, 3, 2, 1, 2]

//brute solution
//can do a linear search for points with either increasing or decreasing elements on both sides


//O(logn) solution: binary search

#include<bits/stdc++.h>
using namespace std;

int findPeak(vector<int>nums, int l, int r){
    while(l<r){
        int mid = l+(r-l)/2;
        if(nums[mid]<nums[mid+1]){
            l=mid+1;
        }else{
            r=mid;
        }
    }
    if(l==0 || l==nums.size()-1)return -1;
    return l;
}

int findValley(vector<int>nums, int l, int r){
    while(l<r){
        int mid = l+(r-l)/2;
        if(nums[mid]>nums[mid+1]){
            l=mid+1;
        }else{
            r=mid;
        }
    }
    if(l==0 || l==nums.size()-1)return -1;
    return l;
}

int findPeakAndValley(vector<int>nums){
    int n = nums.size();
    int peak = findPeak(nums, 0, n-1);
    int valley = findValley(nums, 0, n-1);
    if(peak>0 && valley>0)return -1;
    if(peak>0){
        cout<<"it is a peak ";
        return peak;
    }
    if(valley>0)cout<<"it is a valley ";
    return valley;
}

int main(){
    vector<int>testcase1 = {3, 2, 1, 0, 1};
    vector<int>testcase2 = {4, 5, 6, 7, 8, 9, 8, 7};
    vector<int>testcase3 = {1, 2, 3};
    vector<int>testcase4 = {1, 2, 3, 2, 1, 2};

    int answer = findPeakAndValley(testcase1);
    if(answer>0)cout<<"at: "<<answer<<endl;
    else
        cout<<"Invalid array!"<<endl;
    int answer2 = findPeakAndValley(testcase2);
    if(answer2>0)cout<<"at: "<<answer2<<endl;
    else
        cout<<"Invalid array!"<<endl;
    int answer3 = findPeakAndValley(testcase3);
    if(answer3>0)cout<<"at: "<<answer3<<endl;
    else
        cout<<"Invalid array!"<<endl;
    int answer4 = findPeakAndValley(testcase4);
    if(answer4>0)cout<<"at: "<<answer4<<endl;
    else
        cout<<"Invalid array!"<<endl;

    return 0;
}