//https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1#

int minFlips (string S)
{
    // your code here
    int a=0;
    for(int i=0;i<S.length();i++)
    {
        if(i%2==0)//even place
        {
            if(S[i]!='0')//par 1 hai
            a++;
        }
        else//odd place 
        {
            if(S[i]!='1')//0 hai
            a++;
        }
    }
    int b=S.length()-a;
    int ans=min(a,b);
    return ans;
}
