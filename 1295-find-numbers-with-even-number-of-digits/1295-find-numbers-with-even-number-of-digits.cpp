class Solution {
public:
    bool isdiv(int a) {
        int temp = a;
        int count = 0; // preserve original number
        while (temp > 0) {
            int digit = temp % 10;
            count++;
            temp = temp / 10;
        }
        if (count % 2 == 0)
            return true;
        return false;
        ;
    }
    int tem = 0;
    int findNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (isdiv(nums[i]))
                tem++;
        }
        return tem;
    }
};