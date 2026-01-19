class Solution {
public:
    int count = 0;

    void solve(int col,
               vector<int> &leftrow,
               vector<int> &upperdiagonal,
               vector<int> &lowerdiagonal,
               int n) {

        if (col == n) {
            count++;
            return;
        }

        for (int row = 0; row < n; row++) {

            if (leftrow[row] == 0 &&
                upperdiagonal[n - 1 + col - row] == 0 &&
                lowerdiagonal[row + col] == 0) {

                leftrow[row] = 1;
                upperdiagonal[n - 1 + col - row] = 1;
                lowerdiagonal[row + col] = 1;

                solve(col + 1, leftrow, upperdiagonal, lowerdiagonal, n);

                leftrow[row] = 0;
                upperdiagonal[n - 1 + col - row] = 0;
                lowerdiagonal[row + col] = 0;
            }
        }
    }

    int totalNQueens(int n) {

        vector<int> leftrow(n, 0);
        vector<int> upperdiagonal(2 * n - 1, 0);
        vector<int> lowerdiagonal(2 * n - 1, 0);

        solve(0, leftrow, upperdiagonal, lowerdiagonal, n);
        return count;
    }
};
