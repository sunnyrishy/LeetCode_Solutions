class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> keys;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == key){
                keys.push_back(i);
            }
        }
        set<int> ans;
        int n = nums.size();
        for(int i = 0; i < keys.size(); i++){
            int left = max(0, keys[i]-k);
            int right = min(n-1, (keys[i]+k));
            for(int j = left; j <= right; j++){
                ans.insert(j);
            }
        }
        vector<int> res;
        for(auto it : ans){
            res.push_back(it);
        }
        return res;
    }
};