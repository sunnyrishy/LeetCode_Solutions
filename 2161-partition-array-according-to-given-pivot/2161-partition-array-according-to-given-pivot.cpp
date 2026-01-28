class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, greater, equal;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                less.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                equal.push_back(nums[i]);
            }
            else{
                greater.push_back(nums[i]);
            }
        }
        int index = 0;
        for(int i = 0; i < less.size(); i++){
            nums[index] = less[i];
            index++;
        }
        for(int i = 0; i < equal.size(); i++){
            nums[index] = equal[i];
            index++;
        }
        for(int i = 0; i < greater.size(); i++){
            nums[index] = greater[i];
            index++;
        }
        return nums;
    }
};