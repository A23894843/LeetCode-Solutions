class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
        int i = 0;
        int j = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int max_size = nums1.size() < nums2.size() ? nums1.size() : nums2.size();

        while (i < nums1.size() && j < nums2.size())    {
            if (nums1[i] == nums2[j])   {
                result.push_back(nums1[i]);
                i++;
                j++;
            }   else if (nums1[i] < nums2[j])   i++;
            else    j++;
            if (result.size() == max_size)  break;
        }   return result;
    }
};