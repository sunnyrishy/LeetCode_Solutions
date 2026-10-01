class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& merge) {
        sort(merge.begin(), merge.end());
        vector<vector<int>> res;
        for(int i = 0; i < merge.size(); i++){
            if(res.empty() || (merge[i][0]) > res.back()[1]){
                res.push_back(merge[i]);
            }
            else{
                res.back()[1] = max(res.back()[1], merge[i][1]);
            }
        }
        return res;
    }
};