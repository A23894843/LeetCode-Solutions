class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int factor = minutesToTest / minutesToDie;

        buckets--;
        int pigs = 0;
        while (buckets) {
            pigs++;
            buckets /= factor + 1;
        }   return pigs;
    }
};