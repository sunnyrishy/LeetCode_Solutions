class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin()+n-k, nums.begin()+n); //second part
        reverse(nums.begin(), nums.begin()+n-k); //first part
        reverse(nums.begin(), nums.begin()+n); //total reverse

    }
};