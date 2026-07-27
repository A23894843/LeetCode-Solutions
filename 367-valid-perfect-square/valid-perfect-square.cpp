class Solution {
public:
    bool isPerfectSquare(int num) {
        double sqrt = pow(num, 0.5);

        int sqrt1 = (int)sqrt;
        double result = sqrt - sqrt1;

        return (result == 0 ? true : false);
    }
};