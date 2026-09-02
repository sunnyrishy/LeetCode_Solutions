class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        while(l < n){
            if(nums[l] == val) break;
            else l++;
        }
        while(r >= 0){
            if(nums[r] != val) break;
            else r--;
        }
        while(l <= r){
            if(nums[l] == val && nums[r] != val){
                swap(nums[l], nums[r]);
                l++;
                r--;
            }
            else if (nums[l] == val && nums[r] == val) r--;
            else l++;
        }
        return l;
    }
};