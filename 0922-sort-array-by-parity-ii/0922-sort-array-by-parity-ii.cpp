class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int even = 0;
        int odd = 1;
        while(even < n && odd < n){
            if(nums[even] % 2 == 1 && nums[odd] % 2 == 0){
                swap(nums[even], nums[odd]);
                even++;
                even++;
                odd++;
                odd++;
            }
            else if (nums[even] % 2 == 0){
                even++;
                even++;
            }
            else if (nums[odd] % 2 == 1){
                odd++;
                odd++;
            }
        }
        return nums;
    }
};