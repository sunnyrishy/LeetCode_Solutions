class Solution {
public:
    int bs_first(int low, int high, vector<int>& nums, int target){
        int idx = -1;
        while(low <= high){
            int mid = (low + (high-low)/2);
            if(nums[mid] == target){
                idx = mid;
                high = mid-1;
            }
            else if(nums[mid] < target) low = mid + 1;
            else high = mid-1;
        }
        return idx;
    }

    int bs_last(int low, int high, vector<int>& nums, int target){
        int idx = -1;
        while(low <= high){
            int mid = (low + (high-low)/2);
            if(nums[mid] == target){
                idx = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else high = mid -1;
        }
        return idx;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int first = bs_first(low, high, nums, target);
        int last = bs_last(low, high, nums, target);
        return {first, last};
    }
};