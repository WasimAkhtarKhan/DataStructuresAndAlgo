//https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1

//recursive solution
class Solution{
    public:
    void rem(string &S,int l)
    {
        if(l==0)
        return;
        
        if(S[l-1]==S[l-2])
        S.erase(S.begin()+l-1);
        
        rem(S,l-1);
    }
    
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        rem(S,S.length());
        return S;
    }
};

//Another Solution
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
