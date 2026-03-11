class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map <int,int> freq;
        for(int i = 0;i < nums.size();i++){
            freq[nums[i]]++;
        }
        int index = 0;
        for(int j = 0;j <= 2 ;j++){
            while(freq[j] > 0){
                nums[index] = j;
                
                index++;
                freq[j]--;
            }
        }
    }
};