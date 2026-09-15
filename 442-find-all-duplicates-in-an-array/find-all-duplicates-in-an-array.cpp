class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        set <int> s;
        vector <int> result;

        for (int i = 0; i < nums.size() - 1; i++)   {
            if (nums[i] == nums[i + 1]) s.insert (nums[i++]);
        }   for (int i : s) result.push_back (i);
        return result;
    }
};