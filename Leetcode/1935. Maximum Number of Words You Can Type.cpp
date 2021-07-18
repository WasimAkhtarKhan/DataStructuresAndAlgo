//https://leetcode.com/contest/weekly-contest-250/problems/maximum-number-of-words-you-can-type/

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int broken=0;
        int words=0;
        int length=text.length();
        
        for(int i=0;i<length;i++)
        {                            
            if(text[i]==' ')
                words++;
            else
            {
                size_t found;
                found=brokenLetters.find(text[i]);
                if(found != string::npos)
                {
                    broken++;
                    while(text[i]!=' '&&i<length)
                        i++;
                    i--;
                }
            }
        }
        
        return words-broken+1;
    }
};
