class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;

        // count frequency
        for(int num : nums) {
            freq[num]++;
        }

        int maxi = 0;

        // check pairs
        for(auto &it : freq) {
            int x = it.first;

            if(freq.find(x + 1) != freq.end()) {
                maxi = max(maxi, it.second + freq[x + 1]);
            }
        }

        return maxi;
    }
};