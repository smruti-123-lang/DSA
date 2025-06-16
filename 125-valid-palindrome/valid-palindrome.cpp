class Solution {
private:
    char tolowercase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }
        return ch;
    }

    bool isAlphaNumeric(char ch) {
        return (ch >= 'a' && ch <= 'z') ||
               (ch >= 'A' && ch <= 'Z') ||
               (ch >= '0' && ch <= '9');
    }

public:
    bool isPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int end = n - 1;

        while (start < end) {
            // Skip non-alphanumeric from start
            while (start < end && !isAlphaNumeric(s[start])) start++;

            // Skip non-alphanumeric from end
            while (start < end && !isAlphaNumeric(s[end])) end--;

            // Compare lowercase characters
            if (tolowercase(s[start]) != tolowercase(s[end])) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};
