//https://binarysearch.com/problems/Remove-One-Letter

bool solve(string s0, string s1) {
    if(s0.length()!=s1.length()+1)
    return false;

    int flag=0;
    for(int i=0,j=0;i<s0.length();i++,j++)
    {
        if(s0[i]!=s1[j])
        {
            if(flag==0)
            {
                flag++;
                j--;
                continue;
            }
            else
            return false;
        }
    }
    return true;
}
