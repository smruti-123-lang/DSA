class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini = INT_MAX;
        for(int i = 0; i < tasks.size();i++){
            int sum = 0;
            for(int j = 0; j < tasks[0].size();j++){
            sum = sum + tasks[i][j];
        }
        mini = min(sum,mini);
        }
        return mini;
    }
};