class Solution {
public:
//dp problem using tabulation 
//most optimal version
    int climbStairs(int n) {
        if(n == 0) return 1;
        if(n == 1) return 1;
        int prev2 = 1; //ways to reach step 1 (1)
        int prev = 2; //wats to reach step 2 (1 + 1 or 2)
        for(int i = 3; i <= n; i++){
            int curr = prev + prev2; //number of ways to reach curr step = sum of ways to reach step -1 and step-2
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }

    //similar problem to fibonocci series
};