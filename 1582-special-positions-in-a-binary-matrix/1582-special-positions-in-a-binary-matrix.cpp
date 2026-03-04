class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int count = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (mat[i][j] == 1) {

                    bool isSpecial = true;

                    // Check row
                    for (int k = 0; k < cols; k++) {
                        if (k != j && mat[i][k] == 1) {
                            isSpecial = false;
                            break;
                        }
                    }

                    // Check column (only if row is valid)
                    for (int k = 0; k < rows && isSpecial; k++) {
                        if (k != i && mat[k][j] == 1) {
                            isSpecial = false;
                            break;
                        }
                    }

                    if (isSpecial)
                        count++;
                }
            }
        }

        return count;
    }
};