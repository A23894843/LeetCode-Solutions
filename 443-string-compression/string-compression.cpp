class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0;
        

        if (chars.size() == 0 || chars.size() == 1)  return chars.size();

        for (int i = 0; i < chars.size(); i++)  {
            int count = 0;
            char current = chars[i];
            while (i < chars.size() && chars[i] == current)    {
                count++;
                i++;
            }
            
            if (count == 1) chars[idx++] = current;
            else  {
                chars[idx++] = current;
                string s = to_string(count);
                for (char ch : s)   {
                    chars[idx++] = ch;
                }
            }   i--;
        }   chars.resize(idx);
        return chars.size();
    }
};