class Solution {
public:
    int maxArea(vector<int>& height) {
        int len;
        int bre;
        int area = -100;

        int l, r;
        l = 0;
        r = height.size() - 1;
        while (l < r)   {
            len = min(height[l], height[r]);
            bre = r - l;

            area = max(area, len * bre);

            if (height[l] < height[r])  l++;
            else r--;
        }   return area;
    }
};