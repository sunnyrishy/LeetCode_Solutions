class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check rows
        //check cols
        //check 3x3 boxes
        for(int i = 0; i < 9; i++){ //rows
            set<int> st;
            for(int j = 0; j<9; j++){
                if (board[i][j] == '.') continue;
                if(st.count(board[i][j])) return false;
                st.insert(board[i][j]);
            }
        }
        for(int j = 0; j< 9; j++){
            set<int> st;
            for(int i = 0; i < 9; i++){
                if (board[i][j] == '.') continue;
                if(st.count(board[i][j])) return false;
                st.insert(board[i][j]);
            }
        }
        for(int i = 0; i < 9; i+=3){
            for(int j = 0; j < 9; j+=3){
                set<int> st;
                for(int k = i; k < i+3; k++){
                    for(int l = j; l < j+3; l++){
                        if (board[k][l] == '.') continue;
                        if(st.count(board[k][l])) return false;
                        st.insert(board[k][l]);
                    }
                }
            }
        }
        return true;
    }
};