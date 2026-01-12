class Solution {
public:
    void solve(vector<int>& candidates, vector<int>& ds,
               vector<vector<int>>& ans, int target, int index) {

        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        int n = candidates.size();

        for (int i = index; i < n; i++) {

            if (candidates[i] > target) break;

            if (i > index && candidates[i] == candidates[i - 1]) continue;

            ds.push_back(candidates[i]);
            solve(candidates, ds, ans, target - candidates[i], i + 1);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> ds;

        solve(candidates, ds, ans, target, 0);
        return ans;
    }
};
