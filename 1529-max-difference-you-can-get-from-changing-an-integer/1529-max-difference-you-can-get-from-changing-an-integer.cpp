class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);

        // 1. Try to maximize -> replace first non-9 digit with 9
        string a = s;
        for (char& c : a) {
            if (c != '9') {
                char from = c;
                for (char& ch : a) {
                    if (ch == from) ch = '9';
                }
                break;
            }
        }

        // 2. Try to minimize -> replace first digit (if not 1) with 1, else use next non-zero digit with 0
        string b = s;
        if (b[0] != '1') {
            char from = b[0];
            for (char& ch : b) {
                if (ch == from) ch = '1';
            }
        } else {
            for (int i = 1; i < b.size(); i++) {
                if (b[i] != '0' && b[i] != '1') {
                    char from = b[i];
                    for (char& ch : b) {
                        if (ch == from) ch = '0';
                    }
                    break;
                }
            }
        }

        int maxNum = stoi(a);
        int minNum = stoi(b);

        return maxNum - minNum;
    }
};
