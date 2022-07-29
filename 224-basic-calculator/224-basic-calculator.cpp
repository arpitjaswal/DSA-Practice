class Solution {
public:
    int calculate(string s) {
        stack<pair<int,int>>stk;
        int n=s.length();
        int sum=0;
        int sign=+1;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(isdigit(s[i])){
                long num=0;
                while(i<n && isdigit(s[i])){
                        num=(num*10)+s[i]-'0';
                        i++;
                    }
                i--;
                sum+=(sign*num);
                sign=+1;
            }
            else if(c=='('){
                stk.push(make_pair(sum,sign));
                sum=0;
                sign=+1;
                
            }
            else if(c==')'){
                sum=(stk.top().first)+(stk.top().second*sum);
                stk.pop();
            }
            else if(c=='-'){
                sign*=-1;
            }
        }
        return sum;
    }
};