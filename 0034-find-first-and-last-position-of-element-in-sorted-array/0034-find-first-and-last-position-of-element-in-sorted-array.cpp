class Solution {
public:
    int first_occurance(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int first = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return first;
    }

    int last_occurance(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() -1;
        int last = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else high = mid -1;
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = -1;
        int ub = -1;
        lb = first_occurance(nums, target);
        ub = last_occurance(nums, target);
        if(lb == -1) return {-1, -1};
        return {lb, ub};

    }
};