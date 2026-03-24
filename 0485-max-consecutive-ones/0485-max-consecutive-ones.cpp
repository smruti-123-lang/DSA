class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0, maxOnes = 0;

        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                counter++;
            }
            else {
                maxOnes = max(maxOnes, counter);
                counter = 0;
            }
        }
        return max(maxOnes, counter);
    }
};