class Solution {
public:
    string toHex(int num) {
        if (num == -1)  return "ffffffff";
        if (num == 0)   return "0";
        string hex_str;
        map <int, char> hex = {{0, '0'}, {1, '1'}, {2, '2'}, {3, '3'}, {4, '4'}, {5, '5'}, {6, '6'}, {7, '7'}, {8, '8'}, {9, '9'}, {10, 'a'}, {11, 'b'}, {12, 'c'}, {13, 'd'}, {14, 'e'}, {15, 'f'}};
        if (num > 0)    {
            while (num) {
                int rem = num % 16;
                hex_str = hex[rem] + hex_str;
                num /= 16;
            }
        }   else    {
            for (int i = 0; i < 8; i++) {
                int group = num & 15;
                hex_str += hex[group];
                num = num >> 4;
            }   reverse (hex_str.begin(), hex_str.end());
        }
        return hex_str;
    }
};