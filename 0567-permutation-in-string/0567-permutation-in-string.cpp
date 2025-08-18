class Solution {
    bool checkEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        int count2[26] = {0};

        // count frequency of characters in s1
        for (char ch : s1) {
            count1[ch - 'a']++;
        }

        int window_size = s1.length();
        int n = s2.length();

        // first window
        for (int i = 0; i < window_size && i < n; i++) {
            count2[s2[i] - 'a']++;
        }

        if (checkEqual(count1, count2)) return true;

        // sliding window
        for (int i = window_size; i < n; i++) {
            count2[s2[i] - 'a']++;                // include new char
            count2[s2[i - window_size] - 'a']--;  // remove old char

            if (checkEqual(count1, count2)) return true;
        }

        return false;
    }
};
