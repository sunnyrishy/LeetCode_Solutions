class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //computer the prefix and suffix sum for each element and product them at the end.
        int n = nums.size();
        vector<int> ans(n, 0);
        vector<int> prefix_sum(n, 1);
        vector<int> suffix_sum(n, 1);
        for(int i = 1; i < nums.size(); i++){
            prefix_sum[i] = nums[i-1]*prefix_sum[i-1];
            suffix_sum[n-i-1] = nums[n-i]*suffix_sum[n-i]; 
        }
        for(int i = 0; i < n; i++){
            ans[i] = prefix_sum[i] * suffix_sum[i];
        }
        return ans;
    }
};