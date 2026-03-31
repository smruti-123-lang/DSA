class Solution {
public:

    bool isdiv(int a){
        int temp = a;  // preserve original number
        while(temp > 0){
            int digit = temp % 10;
            if(digit == 0 || a % digit != 0) return false;
            temp = temp / 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int i = left; i <= right; i++){
            if(isdiv(i)){   // FIXED
                ans.push_back(i);
            }
        }
        return ans;
    }
};