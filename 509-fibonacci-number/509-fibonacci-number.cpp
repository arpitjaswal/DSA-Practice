class Solution {
public:
    int fib(int n) {
        if(n<=1)return n;
        int second=fib(n-2);
        int first=fib(n-1);
        return first+second;
    }
};