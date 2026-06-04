class Solution {
public:
    int reverse(int x) {
        int r;
        long long a = 0;

        while(x != 0)   {
            r = x % 10;
            a = a * 10 + r;
            x /= 10;
        }   if (a > INT_MAX || a < INT_MIN) {
            return 0;
        }   else    {
            return a;
        }
    }
};