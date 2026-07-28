class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // most optimal 
        //we need the target-nums[i] value and its index so use unordered_map
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){ //O(n)
            auto it = mpp.find(target-nums[i]);
            if(it != mpp.end()){
                return {i, it->second};
            }
            mpp[nums[i]] = i;

        }
        return {-1,-1};
        //T = O(n) and S = O(n)
        
    }
};