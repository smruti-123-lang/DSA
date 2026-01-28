class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {

                    for (char c = '1'; c <= '9'; c++) {
                        if (isValid(board, c, i, j)) {
                            board[i][j] = c;

                            if (solve(board))
                                return true;

                            board[i][j] = '.';
                        }
                    }
                    return false; // no valid number found
                }
            }
        }
        return true; // solved
    }

    bool isValid(vector<vector<char>>& board, char c, int row, int col) {
        for (int i = 0; i < 9; i++) {
            // row
            if (board[row][i] == c) return false;

            // column
            if (board[i][col] == c) return false;

            // 3x3 box
            if (board[3*(row/3) + i/3][3*(col/3) + i%3] == c)
                return false;
        }
        return true;
    }
};