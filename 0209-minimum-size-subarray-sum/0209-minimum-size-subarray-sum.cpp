class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini = INT_MAX;
        int sum = 0;
        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];
            if(sum >= target){
                mini = min(mini, right-left+1);
                while(sum-nums[left] >= target){
                    sum -= nums[left];
                    left++;
                    mini = min(mini, right-left+1);
                }
            }
        }
        if(mini == INT_MAX) return 0;
        return mini;
    }
};