class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for(int i = 1; i < n; i++){
        //     if(nums[i] == nums[i-1]) return true;
        // }
        // return false;

        unordered_set<int> st;
        for(int i = 0; i < n; i++){
            if(st.count(nums[i])) return true;
            st.insert(nums[i]);
        }
        return false;
        
    }
};