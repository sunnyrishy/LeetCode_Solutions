class Solution {
public:
    int search(vector<int>& nums, int target) {
        //find the sorted protion and check if that portion is useful to us or not.
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            //if left portion is sorted ?
            if(nums[low] <= nums[mid]){
                if(target >= nums[low] && target <= nums[mid]){
                    high = mid -1; //useful
                } //not useful
                else low = mid + 1;
            }
            else{ // this considers the right portion to be sorted.
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid + 1;  //useful
                }
                else{  //not useful
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};