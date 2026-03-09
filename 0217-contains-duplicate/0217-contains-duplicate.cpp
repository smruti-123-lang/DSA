class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        return s.size() != nums.size();

        // unordered_map<int,int> count;

        // for(int i : nums){
        //     count[i]++;
        //     if(count[i] > 1) return true;
        // }

        // return false;
    }
};
