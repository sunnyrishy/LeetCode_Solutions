class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        //first element is always counted
        for(int j = 1; j < n; j++){
            if(nums[j] != nums[j-1]){
                nums[k] = nums[j];
                k++;
            }
        }
        return k;
        // k keeps track of the number of unique elements
        
    }
};