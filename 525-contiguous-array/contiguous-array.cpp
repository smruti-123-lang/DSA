class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> hash;
        int sum = 0;
        int maxlen = 0;

        hash[0] = -1;  // important

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) sum += -1;
            else sum += 1;

            if(hash.find(sum) != hash.end()){
                maxlen = max(maxlen, i - hash[sum]);
            } else {
                hash[sum] = i;
            }
        }

        return maxlen;
    }
};