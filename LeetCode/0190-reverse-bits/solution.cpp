class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversed = 0;
        for(int i=0;i<31;i++) {
            reversed = reversed | (n & 1);
            reversed = reversed << 1;
            n = n >> 1;
        }

        reversed = reversed | (n & 1);

        return reversed;
    }
};
