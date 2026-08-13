class Solution {
public:
    int maxProduct(int n) {
        int prod = 1;
        int maximum = INT_MIN;
        vector <int> nums;

        while (n)   {
            int rem = n % 10;
            nums.push_back(rem);
            n /= 10;
        }

        do {
            for (int i = 0; i < nums.size(); i++)  {
                for (int j = i + 1; j < nums.size(); j++)    {
                    prod = nums[i] * nums[j];
                    maximum = max (maximum, prod);
                    if (prod == 0)  prod = 1;
                }
            }   
        }   while (maximum >= 100);
        return maximum;
    }
};