class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector <int> res (seq.size());

        for (int i = 0; i < seq.size(); i++)    res[i] = (i ^ seq[i]) & 1;

        return res;
    }
};