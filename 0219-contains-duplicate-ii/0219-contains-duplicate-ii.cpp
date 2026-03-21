class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& s, int k) {
        unordered_map<int,int> hash;

        for(int i = 0; i < s.size(); i++) {
            // if element already exists
            if(hash.find(s[i]) != hash.end()) {
                if(i - hash[s[i]] <= k) {
                    return true;
                }
            }
            // update latest index
            hash[s[i]] = i;
        }
        return false;
    }
};