class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = max(nums[0], nums[1]);
        int second_maxi = min(nums[0], nums[1]);
        for(int i = 2; i < n; i++){
            if(nums[i] > maxi){
                second_maxi = maxi;
                maxi = nums[i];
            }
            else if (nums[i] > second_maxi){
                second_maxi = nums[i];
            }
        }
        return (maxi-1)*(second_maxi-1);
        
    }
};