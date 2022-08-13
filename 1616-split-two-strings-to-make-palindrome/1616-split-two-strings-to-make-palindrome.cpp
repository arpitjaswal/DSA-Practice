class Solution {
    private:
    bool isPalindrome(string a, int l, int r){
        while(l<r){
            if(a[l]==a[r]){
                l++;
                r--;
            }
            else
                return false;
        }
        return true;
    }
    bool presuf(string a, string b){
        int l=0;
        int r=b.size()-1;
        while(l<r){
            if(a[l]==b[r]){
                l++;
                r--;
            }
            else
                break;
        }
        return isPalindrome(a,l,r) || isPalindrome(b,l,r);
    }
public:
    bool checkPalindromeFormation(string a, string b) {
        return presuf(a,b) || presuf(b,a);
    }
};