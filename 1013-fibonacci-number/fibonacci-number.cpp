class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        int i = 2;

        if (n == 0) return 0;
        if (n == 1) return 1;

        while (i <= n)   {
            int c = a + b;
            a = b;
            b = c;
            i++;
        }   return b;
    }
};