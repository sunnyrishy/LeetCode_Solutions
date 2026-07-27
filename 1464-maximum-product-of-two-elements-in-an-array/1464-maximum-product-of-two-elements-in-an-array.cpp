class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int last = nums[n-1];
        int last_but_one = nums[n-2];
        return (last-1)*(last_but_one-1);
    }
};