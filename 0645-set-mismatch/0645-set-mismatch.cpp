class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> hash;
        vector<int> ans(2);

        // Count frequency
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }

        int duplicate = -1, missing = -1;

        // Find duplicate
        for(auto it : hash){
            if(it.second == 2){
                duplicate = it.first;
            }
           
        }

        // Find missing
        for(int i = 1; i <= nums.size(); i++){
            if(hash[i] == 0){
                missing = i;
            }
        }

        ans[0] = duplicate;
        ans[1] = missing;

        return ans;
    }
};