class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        sort(nums1.begin(), nums1.end());
        int m = nums1.size();
        if (m % 2 == 0)  {
            m--;
            m /= 2;
            float res = nums1.at(m) + nums1.at(m+1);
            res /= 2;
            return res;
        }   else    {
            int m = nums1.size() / 2;
            return nums1.at(m);
        }
    }
};