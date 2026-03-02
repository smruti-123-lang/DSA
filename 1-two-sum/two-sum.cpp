class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int take;
        int need;
        vector<int> ans;
        for(int i = 0;i < nums.size();i++){
            int take = nums[i];
            int need = target - take;
            for(int j = i + 1;j < nums.size();j++){
                if(need == nums[j]){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;

                }
            }

        }
        return ans;
    }
};
