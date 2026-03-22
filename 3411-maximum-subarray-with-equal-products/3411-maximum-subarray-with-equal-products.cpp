class Solution {
public:
    int maxLength(vector<int>& nums) {

        int n = nums.size();
        int maxi = 0;

        for (int l = 0; l < n; l++) {
            long long p = 1;
            int g = 0;
            long long lc = 1;

            for (int r = l; r < n; r++) {

                // 🔴 Prevent product overflow
                if (p > LLONG_MAX / nums[r]) break;
                p *= nums[r];

                // update gcd
                g = __gcd(g, nums[r]);

                // 🔴 Prevent LCM overflow
                long long g1 = __gcd(lc, (long long)nums[r]);
                if (lc > LLONG_MAX / (nums[r] / g1)) break;
                lc = lc * (nums[r] / g1);

                if (p == g * lc) {
                    maxi = max(maxi, r - l + 1);
                }
            }
        }

        return maxi;
    }
};