class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        string result="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')depth++;
            if(depth>1)result+=s[i];
            if(s[i]==')')depth--;
        }
        return result;
    }
};