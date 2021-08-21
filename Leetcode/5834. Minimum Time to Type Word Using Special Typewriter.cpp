//https://leetcode.com/contest/biweekly-contest-59/problems/minimum-time-to-type-word-using-special-typewriter/

class Solution {
public:
    int minTimeToType(string word) {
        int sec=0;
        char pointer='a';
        for(int i=0;i<word.length();)
        {
            int shift=27;
            if(word[i]>=pointer)
                shift=int(word[i]-pointer);
            else
                shift=int(pointer-word[i]);
            
            if(shift>=13)
                shift = 26 - shift;
            sec += shift;
            pointer=word[i++];
        }
        return sec+word.length();
    }
};
