class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;// allows a elementt only once
        for (int x : nums) {
            if (s.count(x)) return true;// is x still there?
            s.insert(x);// if not there insert it
        }
        return false;
    }
};
