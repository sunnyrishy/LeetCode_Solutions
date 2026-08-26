class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose and reverse every row
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i = 0; i < rows; i++){
            for(int j = i+1; j < rows; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i < rows; i++){
            int left = 0;
            int right = cols-1;
            while(left <= right){
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};