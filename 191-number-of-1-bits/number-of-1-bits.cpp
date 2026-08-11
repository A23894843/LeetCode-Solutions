class Solution {
public:
    int hammingWeight(int n) {
        bitset <32> binary (n);
        int count = 0;

        for (int i = 0; i < 32; i++)    {
            if (binary[i])   count++;
        }   return count;
    }
};