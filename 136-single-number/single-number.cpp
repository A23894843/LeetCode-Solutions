class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int, int> freq;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)   {
            int count = 0;
            int current = nums[i];
            int j = i;
            
            while (j < nums.size()) {
                if (current == nums[j])  count++;
                else    break;
                j++;
            }   freq[count] = current;
            i += count - 1;
        }   return freq[1];
    }
};