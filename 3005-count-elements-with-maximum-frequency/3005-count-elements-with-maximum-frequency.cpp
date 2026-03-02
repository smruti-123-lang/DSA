class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int ,  int> mp;
        int maxFreq = 0;
        int maxAns=0;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            maxFreq = max(maxFreq,mp[nums[i]]);
        }

        for(auto &p: mp){
            if(p.second==maxFreq){
                maxAns += p.second;
            }
        }
        return maxAns;
        
    }
};