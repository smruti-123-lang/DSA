class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2,
                    int bx1, int by1, int bx2, int by2) {

        // rectangle 1 length & breadth
        int l1 = ax2 - ax1;
        int b1 = ay2 - ay1;

        // rectangle 2 length & breadth
        int l2 = bx2 - bx1;
        int b2 = by2 - by1;

        int area1 = l1 * b1;
        int area2 = l2 * b2;

        // overlap length & breadth (same style)
        int l = min(ax2, bx2) - max(ax1, bx1);
        int b = min(ay2, by2) - max(ay1, by1);

        int a = 0;
        if (l > 0 && b > 0) {
            a = l * b;
        }

        return area1 + area2 - a;
    }
};