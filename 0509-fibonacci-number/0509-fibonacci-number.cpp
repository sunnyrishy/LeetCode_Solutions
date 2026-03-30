class Solution {
public:
// using memoization (top-bottom approach)
//we solve the sub problem and store its result

    int f(int n, vector<int>&dp){
        if(n <= 1) return n;
        if(dp[n] != -1) return dp[n]; //step 1
        dp[n] = f(n-1, dp) + f(n-2, dp); //step 2
        return dp[n];  
    }

    int fib(int n) {
        vector<int> dp(n+1, -1); //step 0
        return f(n, dp);
    }
};