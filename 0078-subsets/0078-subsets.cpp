class Solution {
public:
    void solve(int index, vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans) {
        if (index == nums.size()) {
            ans.push_back(ds);
            return;
        }

        // Take the element
        solve(index + 1, ds, nums, ans);
        ds.push_back(nums[index]);


        // Not take the element
        solve(index + 1, ds, nums, ans);
        ds.pop_back();

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0, ds, nums, ans);
        return ans;
    }
};
