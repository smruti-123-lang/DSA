class Solution {
public:
   bool hasAllCodes(string s, int k) {
    // Quick impossible check
    if (s.length() < (1 << k) + k - 1)
        return false;

    unordered_set<string> seen;

    for (int i = 0; i <= s.length() - k; i++) {
        seen.insert(s.substr(i, k));
    }

    return seen.size() == (1 << k);
}

};