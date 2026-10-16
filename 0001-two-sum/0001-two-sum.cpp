class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //store the value and its index in map
        // always look for targert-curr = req
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            int req = target-nums[i];
            if(mpp.find(req) != mpp.end()){
                return {i, mpp.find(req)->second};
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};
    }
};