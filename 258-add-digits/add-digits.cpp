class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
            int sum = 0; // reset sum each round

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            num = sum; // update num
        }
        return num;
    }
};