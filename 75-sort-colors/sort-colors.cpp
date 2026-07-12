class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        for (int i : nums)  {
            switch (i)  {
                case 0 :
                    zeros++;
                    break;
                case 1 :
                    ones++;
                    break;
                case 2 :
                    twos++;
                    break;
                }   
            }
        int i = 0;
        while (i < nums.size()) {
            if (zeros > 0) {
                nums[i] = 0;
                zeros--;
            }   else if (ones > 0) {
                nums[i] = 1;
                ones--;
            }   else    {
                nums[i] = 2;
            }
            i++;
        }
    }
};