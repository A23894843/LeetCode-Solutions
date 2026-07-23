class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map <int, int> hash_map = {{0, -1}};
        int sum = 0;
        bool flag = false;
        if (k == 0) return false;

        for (int i = 0; i < nums.size(); i++)   {
            sum += nums[i];
            int rem = sum % k;
            if (hash_map.count(rem))  {if (i - hash_map[rem] >= 2) return true;}
            else    hash_map[rem] = i;
        }   return false;
    }
};