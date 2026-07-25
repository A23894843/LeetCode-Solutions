class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> m;
        int n = nums.size();
        vector<int> result;

        for (int i = 0; i < n; i++) {
            int first = nums.at(i);
            int second = target - first;

            if (m.find(second) != m.end())  {
                result.push_back(i);
                result.push_back(m[second]);
                return result;
            }   m[first] = i;
        }   result.push_back(-1);
        result.push_back(-1);
        return result;
    }
};