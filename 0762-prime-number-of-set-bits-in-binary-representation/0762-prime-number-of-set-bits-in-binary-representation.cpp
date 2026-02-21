class Solution {
public:
    bool isPrime(int x){
        if(x < 2) return false;
        for(int i = 2; i * i <= x; i++){
            if(x % i == 0) return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        for(int i = left; i <= right; i++){
            int cnt = __builtin_popcount(i); // fastest
            if(isPrime(cnt)) ans++;
        }

        return ans;
    }
};