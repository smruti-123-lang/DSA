class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool isNegative = num < 0;
        num = abs(num);

        string result = "";

        while (num > 0) {
            int rem = num % 7;
            result += (rem + '0');
            num /= 7;
        }

        reverse(result.begin(), result.end());

        if (isNegative) result = "-" + result;

        return result;
    }
};