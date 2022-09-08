class Solution {
private:
    int result(int a, int b, string x){
        int ans=0;
        if(x=="+")ans=a+b;
        else if(x=="-")ans=a-b;
        else if(x=="*")ans=a*b;
        else if(x=="/")ans=a/b;
        
        return ans;
    }
public:
    int evalRPN(vector<string>& s) {
        //int n=s.size();
        //size = 1 case
        //if(n==1)return stoi(s[0]);
        
        stack<int>stk;
        for(auto t:s){
            if(t.size()>1 || isdigit(t[0])){
                stk.push(stoi(t));
            }
            else{
                int a=stk.top();
                stk.pop();
                int b=stk.top();
                stk.pop();
                stk.push(result(b,a,t));
            }
        }
        return stk.top();
    }
};