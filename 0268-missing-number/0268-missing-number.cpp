class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        for(int i = 0; i < n; i++){  //i = (0, 1,2)
            x = x^i^nums[i];  //nums[i] = (3,0,2)
        } // we are missing on n
        return x ^ n;  // we will be left with the missing number
        
    }
};