class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>m;
        char temp;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
            if(m[s[i]]==2){
                temp=s[i];
                break;
            }
        }
        
        // for(auto x: m){
        //     if(x.second==2){
        //         temp=x.first;
        //         break;
        //     }
        // }
        return temp;
    }
};