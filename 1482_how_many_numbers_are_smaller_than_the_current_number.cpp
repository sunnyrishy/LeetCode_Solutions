class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mpp;
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        for(int i = 0; i < n; i++){
            if(mpp.find(temp[i]) == mpp.end()){
                mpp[temp[i]] = i;
            }
        }
        for(int x : nums){
            ans.push_back(mpp[x]);
        }
        return ans;

        
    }
};