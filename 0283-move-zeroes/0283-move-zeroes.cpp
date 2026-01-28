class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = -1;
        int right = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                left = i;
                break;
            }
        }

        for(int i = left; i < nums.size(); i++){
            if(nums[i] != 0){
                right = i;
                break;
            }
        }
        while(right < nums.size()){
            if(nums[left] == 0 && nums[right] != 0){
                swap(nums[left], nums[right]);
                left++;
                right++;
            }
            else{
                right++;
            }
        }
    }
};