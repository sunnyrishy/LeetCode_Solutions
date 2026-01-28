class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int less = 0, equal = 0, greater = 0;
        for(int i = 0;  i < nums.size(); i++){
            if(nums[i] < pivot) less++;
            else if (nums[i] == pivot) equal++;
            else greater++;
        }
        vector<int> ans(nums.size(), 0);
        int less_index = 0;
        int equal_index = less;
        int greater_index = less+equal;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                ans[less_index] = nums[i];
                less_index++;
            }
            else if(nums[i] == pivot){
                ans[equal_index] = nums[i];
                equal_index++;
            }
            else{
                ans[greater_index] = nums[i];
                greater_index++;
            }
        }
        return ans;
    }
};