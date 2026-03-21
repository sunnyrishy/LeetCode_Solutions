class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int first_row = x;
        int last_row = x + k -1;
        while(first_row <= last_row){
            for(int i = first_row; i <= first_row; i++){
                for(int j = y; j < y+k; j++){
                    swap(grid[i][j], grid[last_row][j]);
                }
            }
            first_row++;
            last_row--;
        }
        return grid;
    }
};