54. Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100



  Problem Link : https://leetcode.com/problems/spiral-matrix/



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();

        int sr = 0, er = m-1, sc = 0, ec = n-1; // start row, end row, start column, end column
        int count = 0;

        while(sr <= er && sc <= ec){
            //print first row
            for(int i = sc; i <= ec; i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            if(count == m*n) {
                return ans;
            }
            // print end column
            for(int j = sr; j <= er; j++){
                ans.push_back(matrix[j][ec]);
                count++;
            }
            ec--;
            if(count == m*n) {
                return ans;
            }

            //print end row in reverse order
            for(int i = ec; i >= sc; i--){
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            if(count == m*n) {
                return ans;
            }

            //print start column in reverse order
            for(int j = er; j >= sr; j--){
                ans.push_back(matrix[j][sc]);
                count++;
            }
            sc++;
            if(count == m*n) {
                return ans;
            }
        }
        return ans;
    }
};
