class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp; //element and index
        for(int i = 0; i < nums.size(); i++){
            int req = target - nums[i];
            if(mpp.find(req) != mpp.end()){
                auto it = mpp.find(req);
                return {i, it->second};
            }
            mpp[nums[i]] = i;
        }
        return {-1, -1};

    }
};