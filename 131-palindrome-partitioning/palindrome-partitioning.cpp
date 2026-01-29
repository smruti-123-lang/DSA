class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        func(path, res, s, 0);
        return res;
    }

    void func(vector<string>& path, vector<vector<string>>& res, string& s, int index) {
        if (index == s.size()) {
            res.push_back(path);
            return;
        }

        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {
                path.push_back(s.substr(index, i - index + 1));
                func(path, res, s, i + 1);
                path.pop_back();
            }
        }
    }

    bool isPalindrome(string& s, int start, int end) {
        while (start < end) {
            if (s[start++] != s[end--]) {
                return false;
            }
        }
        return true;
    }
};