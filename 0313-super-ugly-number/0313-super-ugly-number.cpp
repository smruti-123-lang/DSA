#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int k = primes.size();
        vector<long> ugly(n);
        vector<int> index(k, 0);
        vector<long> nextMultiple(k);

        // initialize
        ugly[0] = 1;
        for (int i = 0; i < k; i++) {
            nextMultiple[i] = primes[i];
        }

        for (int i = 1; i < n; i++) {
            long nextUgly = *min_element(nextMultiple.begin(), nextMultiple.end());
            ugly[i] = nextUgly;

            for (int j = 0; j < k; j++) {
                if (nextMultiple[j] == nextUgly) {
                    index[j]++;
                    nextMultiple[j] = ugly[index[j]] * primes[j];
                }
            }
        }

        return ugly[n - 1];
    }
};