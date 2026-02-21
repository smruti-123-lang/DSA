#include <bitset>
#include <vector>
using namespace std;

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
        int n = right - left + 1;
        vector<int> count(n, 0);  // array to store set-bit counts

        int k = 0;
        for(int i = left; i <= right; i++){
            bitset<32> b(i);
            string s = b.to_string();

            for(int j = 0; j < 32; j++){
                if(s[j] == '1'){
                    count[k]++;   // count set bits for this number
                }
            }
            k++;
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(isPrime(count[i])) ans++;  // check prime
        }

        return ans;
    }
};