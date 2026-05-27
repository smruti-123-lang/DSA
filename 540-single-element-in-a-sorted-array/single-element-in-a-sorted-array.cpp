class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int xorr = 0;

        for(int num : nums){
            xorr ^= num;
        }

        return xorr;
    }
};