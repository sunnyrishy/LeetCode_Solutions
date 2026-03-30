class Solution {
public:
//using tabulation
    int fib(int n) {
        if(n <= 1) return n;
        vector<int> dp(n+1, -1); //step 0
        //base case  //step 1
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];  //step 2
        }
        return dp[n];
    }
};