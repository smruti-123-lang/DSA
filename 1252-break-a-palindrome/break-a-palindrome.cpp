class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();

        // Edge case: single character
        if (n == 1) return "";

        // Try to replace first non-'a' in first half
        for (int i = 0; i < n / 2; i++) {
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }

        // If all characters are 'a'
        palindrome[n - 1] = 'b';
        return palindrome;
    }
};