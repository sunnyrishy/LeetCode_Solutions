class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> res;
        for(int i = 0; i < strs.size(); i++){
            string copy = strs[i];
            sort(copy.begin(), copy.end());
            mpp[copy].push_back(strs[i]);
        }
        for(auto it : mpp){
            res.push_back(it.second);
        }
        return res;

    }
};