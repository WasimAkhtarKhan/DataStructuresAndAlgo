//https://leetcode.com/explore/featured/card/february-leetcoding-challenge-2021/584/week-1-february-1st-february-7th/3625/



class Solution {
public:
    int hammingWeight(uint32_t n) {
        unsigned int count = 0;
        while (n > 0) {     
            if ((n & 1) == 1)
                count++;
            n >>= 1;
        }
        return count;
    }
};
