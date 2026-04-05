class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> hash;

        // count frequency of s
        for (int i = 0; i < s.size(); i++) {
            hash[s[i]]++;
        }

        // check in t
        for (int j = 0; j < t.size(); j++) {
            if (hash[t[j]] == 0) {
                return t[j];  // extra character found
            }
            hash[t[j]]--;
        }

        return ' '; // fallback
    }
};