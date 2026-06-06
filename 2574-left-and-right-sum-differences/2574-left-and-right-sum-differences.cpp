class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left_sum(n, 0);
        vector<int> right_sum(n,0);
        for(int i = 0; i < n-1; i++){
            left_sum[i+1] = left_sum[i] + nums[i];
        }
        for(int i = n-1; i> 0; i--){
            right_sum[i-1] = right_sum[i] + nums[i];
        }
        vector<int> ans(n,-1);
        for(int i = 0;i < n; i++){
            ans[i] = abs(left_sum[i] - right_sum[i]);
        }
        return ans;

        
    }
};