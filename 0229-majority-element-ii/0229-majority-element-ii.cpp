class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            count[nums[i]]++;
            
        }
        for(auto i : count){
            if(i.second > n/3)
            ans.push_back(i.first);
        }
        return ans;
    }
};