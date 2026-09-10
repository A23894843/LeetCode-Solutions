class Solution {
public:
    int arrangeCoins(int n) {
        int left = 0;
        int right = n;

        while (left <= right)   {
            long mid = left + (right - left) / 2;
            long coin_needed = mid * (mid + 1)  / 2;

            if (coin_needed == n)   return mid;
            else if (coin_needed < n)   left = mid + 1;
            else    right = mid - 1;
        }   return right;
    }
};