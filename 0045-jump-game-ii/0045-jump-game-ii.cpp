class Solution {
public:
    int jump(vector<int>& nums) {
        int l = 0, r = 0;
        int jumps = 0;
        int n = nums.size();

        while (r < n - 1) {
            int farthest = 0;

            for (int i = l; i <= r; i++) {
                farthest = max(farthest, i + nums[i]);
            }

            l = r + 1;
            r = farthest;
            jumps++;
        }

        return jumps;
    }
};
// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         return jumping(0, 0, nums);
//     }

//     int jumping(int index, int jumps, vector<int>& nums) {
//         int n = nums.size();

//         if (index >= n - 1) {
//             return jumps;
//         }

//         int mini = INT_MAX;

//         for (int step = 1; step <= nums[index]; step++) {
//             mini = min(mini, jumping(index + step, jumps + 1, nums));
//         }

//         return mini;
//     }
// };
