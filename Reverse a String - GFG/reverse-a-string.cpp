// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++
void helper(string &str, int i, int j){
    //base case
    if(i>=j)return;
    
    //processing
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    
    //recursive call
    helper(str,++i,--j);
}
string reverseWord(string str){
    int i=0;
    int j=str.length()-1;
    helper(str,i,j);
    return str;
}