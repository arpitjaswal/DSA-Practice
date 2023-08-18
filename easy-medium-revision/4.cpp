// Reverse a given Array
// Problem Statement: You are given an array. The task is to reverse the array and print it. 

// Examples:

// Example 1:
// Input: N = 5, arr[] = {5,4,3,2,1}
// Output: {1,2,3,4,5}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

// Example 2:
// Input: N=6 arr[] = {10,20,30,40}
// Output: {40,30,20,10}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&v){
    int n = v.size();

    int s = 0;
    int e = n-1;
    while(s<=e){
        int temp = v[s];
        v[s++]=v[e];
        v[e--]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v{5,4,3,2,1};
    vector<int>v2{10,20,30,40};

    reverse(v);
    reverse(v2);
    return 0;
}
