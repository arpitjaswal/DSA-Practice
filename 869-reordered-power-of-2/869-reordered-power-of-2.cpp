class Solution {
private:
    string sortusingstring(int n){
        string s=to_string(n);
        sort(s.begin(), s.end());
        return s;
    }
public:
    bool reorderedPowerOf2(int n) {
        string s=sortusingstring(n);
        for(int i=0;i<32;i++){
            if(s==sortusingstring(1<<i))return true;
        }
        return false;
    }
};