class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n) {
            if((n & 1) == 1) {
                count++;
            }
            n = (unsigned)n >> 1;
        }
        return count;
    }
};