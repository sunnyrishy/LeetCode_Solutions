class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++){
            int tar_count = 0;
            for(int j = i; j < n; j++){
                if(nums[j] == target) tar_count++;
                if(tar_count > (j-i+1)/2) count++;
            }
        }
        return count;
    }
};