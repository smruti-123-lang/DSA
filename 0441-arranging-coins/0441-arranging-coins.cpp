class Solution {
public:
    int arrangeCoins(int n) {
        double a = 1, b = 1, c = -2.0 * n;

        double d = b * b - 4 * a * c;

        double root1 = (-b + sqrt(d)) / (2 * a);

        return (int)floor(root1);
    }
};