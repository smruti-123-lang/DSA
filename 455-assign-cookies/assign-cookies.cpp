class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0; // child index
        int j = 0; // cookie index
        int count = 0;

        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                count++;   // child is satisfied
                i++;       // move to next child
                j++;       // cookie used
            } else {
                j++;       // cookie too small, try next bigger one
            }
        }
        return count;
    }
};
