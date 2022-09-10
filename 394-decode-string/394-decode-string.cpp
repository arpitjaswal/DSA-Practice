class Solution {
public:
    string decodeString(string s) {
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]!=']'){
                st.push(s[i]);
            }
            else{
                string curr_str="";
                while(st.top()!='['){
                    curr_str=st.top()+curr_str;
                    st.pop();
                }
                st.pop();
                string number="";
                while(!st.empty() && isdigit(st.top())){
                    number=st.top()+number;
                    st.pop();
                }
                int intv=stoi(number);
                while(intv--){
                    for(int y=0;y<curr_str.length();y++){
                        st.push(curr_str[y]);
                    }
                }
            }
        }
        s="";
        while(!st.empty()){
            s=st.top()+s;
            st.pop();
        }
        return s;
    }
};