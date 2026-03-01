class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        int k = 0;   // position to place valid elements

        for (int i = 0; i < nums.size(); i++) {
            
            if (freq[nums[i]] < 2) {   // allow at most 2
                nums[k] = nums[i];
                k++;
            }
            
            freq[nums[i]]++;   // increase frequency
        }

        return k;
    }
};