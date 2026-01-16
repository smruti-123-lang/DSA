class Solution {
public:
    void solve(vector<int>& ds, vector<int>& freq,
               vector<vector<int>>& ans, vector<int>& nums) {

        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!freq[i]) {
                freq[i] = 1;
                ds.push_back(nums[i]);

                solve(ds, freq, ans, nums);

                ds.pop_back();
                freq[i] = 0;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size());

        solve(ds, freq, ans, nums);
        return ans;
    }
};
