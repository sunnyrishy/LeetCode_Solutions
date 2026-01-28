class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = -1;
        for(int k = nums.size()-1; k >= 0; k--){
            if(nums[k] != val){
                j = k;
                break;
            }
        }
        while(i <= j){
            if(nums[i] == val && nums[j] != val){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            if(nums[i] != val) i++;
            if(nums[j] == val) j--;
        }
        return i;
    }
};