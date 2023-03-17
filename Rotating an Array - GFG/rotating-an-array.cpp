//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
private:
    void reverseA(int arr[], int s, int e){
        while(s<=e){
            int temp=arr[s];
            arr[s++]=arr[e];
            arr[e--]=temp;
        }
    }
public:
    void leftRotate(int arr[], int n, int d) {
        d=d%n;
        reverseA(arr,0,d-1);
        reverseA(arr,d,n-1);
        reverseA(arr,0,n-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends