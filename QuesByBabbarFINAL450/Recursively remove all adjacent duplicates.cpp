//https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        for(int i=1;i<S.length();)
        {
            if(S[i]==S[i-1])
                S.erase(S.begin()+i);
            else
                i++;
        }
        return S;
    }
};
