class Solution {
public:
    int rec(int n){
        if(n<=3) return n;
        return rec(n-2)+rec(n-1);
    }
    int climbStairs(int n) {
        return rec(n);
    }
};
