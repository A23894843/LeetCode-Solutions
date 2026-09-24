class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue <pair <int, int>> heap;

        for (int i = 0; i < score.size(); i++)  heap.push ({score[i], i});

        vector <string> rank (score.size());
        int place = 1;
        while (!heap.empty())   {
            int originalIndex = heap.top().second;
            heap.pop();
            if (place == 1) rank [originalIndex] = "Gold Medal";
            else if (place == 2) rank [originalIndex] = "Silver Medal";
            else if (place == 3) rank [originalIndex] = "Bronze Medal";
            else rank [originalIndex] = to_string(place);
            place++;
        }   return rank;
    }
};