class Solution {
public:
    string convertToBase7(int num) {
        string result;
        bool flag = false;
        if (num == 0)   {
            result.push_back ('0');
            return result;
        }
        if (num < 0)    {
            flag = true;
            num = -num;
        }

        while (num > 0) {
            int rem = num % 7;
            result.push_back(rem + '0');
            num /= 7;
        }   reverse (result.begin(), result.end());
        if (flag)   result.insert (0, 1, '-');
        return result;
    }
};