class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset <32> binary1 (x);
        bitset <32> binary2 (y);
        int result = 0;

        for (int i = 0; i < 32; i++)   {
            int first = binary1[i] - '0';
            int second = binary2[i] - '0';
            result += (first ^ second);
        }   return result;
    }
};