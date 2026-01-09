class Solution {
public:
    void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& vis){
        int n = grid.size();
        int m = grid[0].size();
        vector<pair<int, int>> directions = {{1,0}, {-1, 0}, {0,1}, {0,-1}};
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row, col});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(auto [dr, dc] : directions){
                int nrow = row + dr;
                int ncol = col + dc;
                if(nrow >= 0 && nrow < n &&  ncol >= 0 && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == '1'){
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(); //rows
        int m = grid[0].size(); //cols
        vector<vector<int>> vis(n, vector<int>(m,0));
        int islands = 0;
        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(!vis[row][col] && grid[row][col] == '1'){
                    islands++;
                    bfs(row, col, grid, vis);
                }
            }
        }
        return islands;
    }
};