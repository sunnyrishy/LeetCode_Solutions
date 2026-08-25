class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 1 ) return;
        int n = nums.size();
        int i = 0;
        int j = 0;
        while(i < n){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
            i++;
        }
        return;
    }
};