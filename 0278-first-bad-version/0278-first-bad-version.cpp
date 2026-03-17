class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (isBadVersion(mid)) {
                high = mid; // go left
            } else {
                low = mid + 1; // go right
            }
        }
        
        return low; // or high (both same)
    }
};