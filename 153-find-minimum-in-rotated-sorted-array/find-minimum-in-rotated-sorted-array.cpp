class Solution {
public:
    int findMin(vector<int>& nums) {
        int minimum = INT_MAX;
        for (int i : nums)  minimum = min(minimum, i);
        return minimum;
    }
};