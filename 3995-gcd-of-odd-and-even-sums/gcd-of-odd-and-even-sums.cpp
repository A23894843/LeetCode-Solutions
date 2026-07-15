class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        long long int sumOdd = 0;
        long long int sumEven = 0;

        for (int i = 1; i <= n*2; i++) {
            if (i % 2 == 0) sumEven += i;
            else    sumOdd += i;
        }

        if (sumOdd == 0 || sumEven == 0)   return 0;

        long long int result = min(sumEven, sumOdd);
        while (result > 0)  {
            if (sumEven % result == 0 && sumOdd % result == 0)  {
                break;
            }   result--;
        }   return result;
    }
};