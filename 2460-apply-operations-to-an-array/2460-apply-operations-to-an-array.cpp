class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
            }
        }
        int zero_index = -1;
        //locate the first zero;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zero_index = i;
                break;
            }
        }
        if(zero_index == -1) return nums;
        int non_zero = zero_index+1;
        while(non_zero < nums.size()){
            if(nums[non_zero] != 0){
                swap(nums[zero_index], nums[non_zero]);
                non_zero++;
                zero_index++;
            }
            else{
                non_zero++;
            }
        }
        return nums;
    }
};