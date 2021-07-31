//https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1#

int countRev (string s)
{
    // your code here
    int n=s.length();
    if(n%2==1)
    return -1;
    
    int c=0,op=0,cl=0;
    int i=0;
    
    while(i<n)
    {
        if(s[i]=='{')
        op++;
        else
        {
            if(cl==op)
            {
                op++;
                c++;
            }
            else
            cl++;
        }
        i++;
    }
    
    return (op-cl)/2+c;
    
}
