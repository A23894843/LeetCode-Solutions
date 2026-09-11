class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector <string> result;
        int temp = 256;

        for (int i = 1; i <= 3; i++)    {
            for (int j = 1; j <= 3; j++)    {
                for (int k = 1; k <= 3; k++)    {
                    for (int m = 1; m <= 3; m++)    {
                        if (i + j + k + m != s.size())  continue;
                        string t0 = to_string (stoi (s.substr (0, i)));
                        string t1 = to_string (stoi (s.substr (i, j)));
                        string t2 = to_string (stoi (s.substr (i + j, k)));
                        string t3 = to_string (stoi (s.substr (i + j + k, m)));

                        if (stoi(t0) < temp && stoi(t1) < temp && stoi(t2) < temp && stoi(t3) < temp)   {
                            string ip = t0 + '.' + t1 + '.' + t2 + '.' + t3;
                            if (ip.size() == s.size() + 3)  result.push_back (ip);
                        }
                    }
                }
            }
        }   return result;
    }
};