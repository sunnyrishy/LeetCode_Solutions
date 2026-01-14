 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mpp;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int val1 = nums[i];
            int val2 = target - val1;
            if(mpp.find(val2) != mpp.end()){
                ans.push_back(mpp[val2]);
                ans.push_back(i);
            }
            mpp[val1] = i;
        }
        return ans;
        
    }
};