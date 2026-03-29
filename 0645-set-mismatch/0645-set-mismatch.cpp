class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> hash;
        vector<int> ans(2);
        
        // Count frequency
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }
        
        // Find duplicate and missing
        for(int i = 1; i <= nums.size(); i++){
            if(hash[i] == 2){
                ans[0] = i; // duplicate
            }
            else if(hash[i] == 0){
                ans[1] = i; // missing
            }
        }
        
        return ans;
    }
};