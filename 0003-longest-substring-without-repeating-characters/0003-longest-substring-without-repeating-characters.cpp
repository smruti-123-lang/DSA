class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int l = 0;
        int r = 0;
        int n = s.length();
        int maxlen = 0;
        while (r < n) {
            hash[s[r]]++;
            while (hash[s[r]] > 1) {
                hash[s[l]]--;
                l++;
            }
            maxlen = max(maxlen,r-l+1);
            r++;
        }
    return maxlen;

    }
};

// int hash[256];
//     for(int i = 0; i < 256; i++){
//         hash[i] = -1;
//     }

//     int l = 0, r = 0;
//     int maxlen = 0;
//     int n = s.length();

//     while(r < n){
//         if(hash[s[r]] >= l){
//             l = hash[s[r]] + 1;
//         }

//         int len = r - l + 1;
//         maxlen = max(maxlen, len);

//         hash[s[r]] = r;
//         r++;
//     }

//     return maxlen;
// }