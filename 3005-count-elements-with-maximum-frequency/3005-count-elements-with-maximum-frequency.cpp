class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> count;
        int maxi = INT_MIN;
        int sum = 0;
        int maxfre = 0;
        for(int i = 0;i < nums.size();i++){
            count[nums[i]]++;
            maxfre = max(maxfre,count[nums[i]]);
        }

         for(int i = 0;i < count.size();i++){
            if(count[i] == maxfre){
                sum= sum + maxfre;
            }
        }




return sum;
    }
};