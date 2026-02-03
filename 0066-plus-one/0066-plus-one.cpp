class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        // fix loop start and direction
        for (int i = n - 1; i >= 0; i--) {

            // remove unused variables (carry, sum)
            if (digits[i] < 9) {
                digits[i] = digits[i] + 1;
                return digits;
            } else {
                digits[i] = 0;   // carry continues automatically
            }
        }

        // if loop finishes, all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

