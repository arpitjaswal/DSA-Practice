// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int row=mat.size(), col=mat[0].size(),r=0, c=col-1;
	    if(mat.empty())return false;
	    while(r<N && c>=0){
	        if(mat[r][c]==X)return true;
	        else if(mat[r][c]<X)r++;
	        else
	            c--;
	    }
	    return false;
	}
};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}  // } Driver Code Ends