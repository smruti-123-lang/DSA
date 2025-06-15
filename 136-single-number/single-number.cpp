class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        int i;
        int ans = 0;
        for (i = 0; i < size; i++) {
            ans = ans ^ nums[i];
    }
    return ans;}
    };