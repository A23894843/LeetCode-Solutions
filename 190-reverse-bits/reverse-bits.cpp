class Solution {
public:
    int reverseBits(int n) {
        bitset <32> binary (n);

        string bits = binary.to_string();

        reverse (bits.begin(), bits.end());

        int result = stoi (bits, NULL, 2);

        return result;
    }
};