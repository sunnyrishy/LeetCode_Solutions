class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        if(nums[1] < nums[0]) return false;
        int p = -1;
        int q = -1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) return false;
            if(nums[i] < nums[i-1]){
                p = i;
                break;
            }
        }
        if(p == -1) return false;
        for(int i = p; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) return false;
            if(nums[i] > nums[i-1]){
                q = i;
                break;
            }
        }
        if(q == -1) return false;
        for(int i = q; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) return false;
            if(nums[i] < nums[i-1]) return false;
        }
        return true;
    }
};