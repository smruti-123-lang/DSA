class Solution {
public:
    int characterReplacement(string s, int k) {
       int mpp[26] = {0};
        int r = 0;
        int l = 0;
        int maxlen = 0;
        int maxf = 0;
        while (r < s.length()) {
            mpp[s[r] - 'A']++;
            maxf = max(maxf, mpp[s[r] - 'A']);
            if (((r - l + 1) - maxf) > k) {
                mpp[s[l] - 'A']--;
                maxf = 0;
                l++;
            }
            if (((r - l + 1) - maxf) <= k) {
                maxlen = max(maxlen, (r - l + 1));
            }
            r++;
        }
        return maxlen;
    }
};