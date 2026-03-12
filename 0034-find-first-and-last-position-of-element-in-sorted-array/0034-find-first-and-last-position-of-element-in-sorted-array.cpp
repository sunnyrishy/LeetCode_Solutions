class Solution {
public:
    void find_lb(vector<int>& nums, int target, int &lb){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                lb = mid;
                high = mid -1;
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else high = mid -1;
        }
        return;
    }

    void find_ub(vector<int>& nums, int target, int &ub){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                ub = mid;
                low = mid +1;
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else high = mid -1;
        }
        return;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = -1;
        int ub = -1;
        find_lb(nums, target, lb);
        find_ub(nums, target, ub);
        return {lb, ub};

        
    }
};