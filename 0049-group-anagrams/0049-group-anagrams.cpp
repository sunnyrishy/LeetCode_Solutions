class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(string str : strs){
            string key = str;
            sort(key.begin(), key.end());
            mpp[key].push_back(str);
        }
        vector<vector<string>> res;
        for(auto it : mpp){
            res.push_back(it.second);
        }
        return res;
    }
};