class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ds;

        // count occurrences
        for (int i = 0; i < arr.size(); i++) {
            int a = arr[i];
            int b = 0;

            // check if this element was already processed
            for (int k = 0; k < i; k++) {
                if (arr[k] == a) {
                    b = -1;
                    break;
                }
            }
            if (b == -1) continue;

            for (int j = 0; j < arr.size(); j++) {
                if (a == arr[j]) {
                    b++;
                }
            }
            ds.push_back(b);   // push only once per number
        }

        // check if any frequency repeats
        for (int i = 0; i < ds.size(); i++) {
            for (int j = i + 1; j < ds.size(); j++) {
                if (ds[i] == ds[j]) {
                    return false;
                }
            }
        }
        return true;
    }
};
