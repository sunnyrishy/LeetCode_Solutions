class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans = 0;
        int negatives = 0;
        int mini = INT_MAX;
        for(auto& row : matrix){
            for(int val : row){
                ans += abs(val);
                if(val < 0){
                    negatives++;
                }
                mini = min(mini, abs(val));
            }
        }
        if(negatives % 2 == 0) return ans;
        return ans - 2*mini;
    }
};