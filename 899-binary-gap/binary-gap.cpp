

class Solution {
public:
    int binaryGap(int n) {
        // Convert integer to binary string
        string s = "";
        int temp = n;
        while(temp > 0) {
            s = char('0' + temp % 2) + s; // prepend 0 or 1
            temp /= 2;
        }

        int maxGap = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1') {
                for(int j = i + 1; j < s.length(); j++) {
                    if(s[j] == '1') {
                        int gap = j - i;
                        if(gap > maxGap) maxGap = gap;
                        break; // only next 1
                    }
                }
            }
        }

        return maxGap;
    }
};

