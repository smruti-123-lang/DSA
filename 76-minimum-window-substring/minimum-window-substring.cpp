class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0;
        int r = 0;
        int mini = INT_MAX;
        int count = 0;
        int n = s.size();
        int m = t.size();
        int index = -1;
        unordered_map<char, int> hash;
        for (int i = 0; i < m; i++) {
            hash[t[i]]++;
        }
        while (r < n) {
            if (hash[s[r]] > 0)
                count = count + 1;

            hash[s[r]]--;//if we see it we delete it

            while(count == m){
                if((r-l+1) < mini){
                    mini = r-l+1;
                    index = l;

                }
                hash[s[l]]++;
                if(hash[s[l]] > 0) count = count - 1;
                l++;

            }
            r = r+1;
        }
        return index == -1 ? "" : s.substr(index, mini);
    }
};