class Solution {
public:
    double myPow(double x, int n) {
        int i = 0;
        double result = 1;
        long long power = n;

        if (x == 0) return 0;
        if (x == 1) return 1;
        if (n == 0) return 1;
        if (n == 1) return x;

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        while (power > 0) {

            if (power % 2 == 1)
                result *= x;

            x *= x;
            power /= 2;
        }   return result;
    }
};