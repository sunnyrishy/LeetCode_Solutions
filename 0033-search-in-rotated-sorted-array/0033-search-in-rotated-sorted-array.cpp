class Solution {
public:
    int search(vector<int>& nums, int target) {
        //we have atleast one portion to be sorted either left or right
        //sorted we have two options 1. it is useful 2. it is not useful
        //unsorted we have two options 1. it is useful 2. it is not useful
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            if(nums[low] <= nums[mid]){  //left portion is sorted
                if(target >= nums[low] && target <= nums[mid]){ //useful
                    high = mid -1;
                }
                else{  //not useful
                    low = mid + 1;
                }
            }
            else{  //rightportion is not sorted
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid -1;
                }
            }
        }
        return -1;
    }
};