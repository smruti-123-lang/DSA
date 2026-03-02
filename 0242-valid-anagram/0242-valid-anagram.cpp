class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;

        unordered_map<char,int> m;
        unordered_map<char,int> n;

        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
        }

        for(int j = 0; j < t.length(); j++){
            n[t[j]]++;
        }

        for(auto &p : m){
            if(p.second != n[p.first]){
                return false;
            }
        }

        return true;
    }
};