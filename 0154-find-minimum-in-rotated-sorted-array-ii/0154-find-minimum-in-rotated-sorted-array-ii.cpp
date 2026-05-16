class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int ans = nums[0];
        while(left <= right){
            int mid = left + (right-left)/2;
            if(left == right){
                ans = min(ans, nums[left]);
                break;
            }
            if(nums[left] == nums[mid] && nums[mid] == nums[right]){
                ans = min(ans, nums[left]);
                left++;
                right--;
                continue;
            }
            else if (nums[left] <= nums[mid]){
                ans = min(ans, nums[left]);
                left = mid + 1;
            }
            else{
                ans = min(ans, nums[mid]);
                right = mid - 1;
            }
        }
        return ans;
    }
};