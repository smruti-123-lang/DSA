class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int start = 0;
        int end = rows * cols - 1;

        while (start <= end) {
            int midIndex = start + (end - start) / 2;
            int midValue = matrix[midIndex / cols][midIndex % cols];

            if (midValue == target) {
                return true;
            }
            else if (midValue > target) {
                end = midIndex - 1;
            }
            else {
                start = midIndex + 1;
            }
        }
        return false;
    }
};
