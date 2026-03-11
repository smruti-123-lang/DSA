class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        int maxi = INT_MIN;
        int ans;
        for(int i = 0;i < nums.size();i++){
            count[nums[i]]++;
            
        }
        for(auto i : count){
            if(i.second > maxi){
                maxi = i.second;
                ans = i.first;
            }
            
        }
        return ans;

    }
};