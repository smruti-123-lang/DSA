class Solution {
public:
int count = 0;
    void solve(int col, vector<string>& board, vector<vector<string>>& ans,
               vector<int>& leftrow, vector<int>& upperdiagonal,
               vector<int>& lowerdiagonal, int n) {
        if (col == n) {
            ans.push_back(board);
            count++;
            return;
        }
        for (int row = 0; row < n; row++) {
            if (leftrow[row] == 0 && upperdiagonal[n - 1 + col - row] == 0 &&
                lowerdiagonal[row + col] == 0) {
                board[row][col] = 'Q';
                leftrow[row] = 1;
                upperdiagonal[n - 1 + col - row] = 1;
                lowerdiagonal[row + col] = 1;
                solve(col + 1, board, ans, leftrow, upperdiagonal,
                      lowerdiagonal, n);
                board[row][col] = '.';
                leftrow[row] = 0;
                upperdiagonal[n - 1 + col - row] = 0;
                lowerdiagonal[row + col] = 0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        vector<int> leftrow(n, 0);
        vector<int> upperdiagonal(2 * n - 1, 0);
        vector<int> lowerdiagonal(2 * n - 1, 0);
        solve(0, board, ans, leftrow, upperdiagonal, lowerdiagonal, n);
        return count;
    }
}
;