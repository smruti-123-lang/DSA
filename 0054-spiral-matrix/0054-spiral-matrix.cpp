class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int sR = 0, sC = 0;
        int eR = rows - 1, eC = cols - 1;

        int total = rows * cols;
        int count = 0;

        while (count < total) {
            // Top row
            for (int i = sC; i <= eC && count < total; i++) {
                ans.push_back(matrix[sR][i]);
                count++;
            }
            sR++;

            // Right column
            for (int i = sR; i <= eR && count < total; i++) {
                ans.push_back(matrix[i][eC]);
                count++;
            }
            eC--;

            // Bottom row
            for (int i = eC; i >= sC && count < total; i--) {
                ans.push_back(matrix[eR][i]);
                count++;
            }
            eR--;

            // Left column
            for (int i = eR; i >= sR && count < total; i--) {
                ans.push_back(matrix[i][sC]);
                count++;
            }
            sC++;
        }

        return ans;
    }
};
