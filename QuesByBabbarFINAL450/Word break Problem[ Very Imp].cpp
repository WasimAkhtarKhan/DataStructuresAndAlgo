//https://practice.geeksforgeeks.org/problems/word-break1352/1#

//Optimal solution N^2
//My Solution O:N^2
int wordBreak(string A, vector<string> &B) {
    //code here
    int i=0;
    for(i=0;i<A.length();)
    {
        int lar=0;
        for(int j=0;j<B.size();j++)
        {
            int l=B[j].length();
            if(A.compare(i,l,B[j])==0)
                lar=max(lar,l);
        }
        if(lar==0)
        return 0;
        i=i+lar;
    }
    if(i==A.length())
    return 1;
    
    return;
}
