class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> bits;

        while(n > 0){
            int bit = n % 2;
            bits.push_back(bit);
            n = n / 2;
        }

        reverse(bits.begin(), bits.end());

        for(int i = 0; i < bits.size() - 1; i++){
            if(bits[i] == bits[i+1]){
                return false;
            }
        }
        return true;
    }
};
