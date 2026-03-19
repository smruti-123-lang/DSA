class Solution {
public:
    int maxArea(vector<int>& height) {
        int r = 0;
        int l = height.size() - 1;
        int area = 0;

        while(r < l){
            int width = l - r;
            int h = min(height[l], height[r]);
            area = max(area, width * h);

            if(height[r] < height[l]){
                r++;   // move left pointer right
            }
            else{
                l--;   // move right pointer left
            }
        }
        return area;
    }
};