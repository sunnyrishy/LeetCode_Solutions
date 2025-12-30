class Solution {
public:
    bool isMagic(vector<vector<int>>& grid, int i, int j){
        if(grid[i+1][j+1] != 5) return false;   //middle element should be 5
        vector<int> freq(10, 0);
        for(int x = i; x<i+3; x++){
            for(int y = j; y < j+3; y++){
                int v = grid[x][y];
                if(v < 1 || v > 9) return false;
                if (freq[v] == 1) return false;
                freq[v] = 1;
            }
        }
        
        int s = 15;
        for(int r = 0; r < 3; r++){  //each row sum
            if(grid[i+r][j] + grid[i+r][j+1] + grid[i+r][j+2] != s) return false;
        }
        for(int c = 0; c < 3; c++){  //each col sum
            if(grid[i][j+c] + grid[i+1][j+c] + grid[i+2][j+c] != s) return false;
        }

        if(grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2] != s) return false;  //diag sum
        if(grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j] != s) return false;  //diag sum
        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        for(int i = 0; i+2 < rows; i++){
            for(int j = 0; j+2 < cols; j++){
                if(isMagic(grid, i, j)) count++;
            }
        }
        return count;
        
    }
};