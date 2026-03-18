class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<int>> prefix_sum(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i == 0 && j == 0){
                    prefix_sum[i][j] = grid[i][j];
                }
                else if (i == 0){
                    prefix_sum[i][j] = prefix_sum[i][j-1] + grid[i][j];
                }
                else if (j == 0){
                    prefix_sum[i][j] = prefix_sum[i-1][j] + grid[i][j];
                }
                else prefix_sum[i][j] = prefix_sum[i-1][j] + prefix_sum[i][j-1] - prefix_sum[i-1][j-1] + grid[i][j];
                
                if(prefix_sum[i][j] <= k) ans++;
            }
        }
        return ans;
    }
};