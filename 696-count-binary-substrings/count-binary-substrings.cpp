class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 0;
        int n = s.length();

        for(int i = 0; i < n - 1; i++){
            if(s[i] != s[i+1]){
                count++;  // handles "01" and "10"

                int left = i;
                int right = i + 1;

                // expand outward for 0011, 000111, etc.
                while(left > 0 && right < n-1 && s[left-1] == s[i] && s[right+1] == s[i+1]){
                    count++;
                    left--;
                    right++;
                }
            }
        }
        return count;
    }
};
