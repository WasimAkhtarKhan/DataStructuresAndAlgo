//https://binarysearch.com/problems/Narcissistic-Number

bool solve(int n) {
    int x=n;
    if(n==0)
    return true;

    int a=n;
    int digits=0;
    while(a)
    {
        digits++;
        a=a/10;
    }
    int ans=0;

    while(n)
    {
        int t=n%10;
        ans += pow(t,digits);
        n=n/10;
    }
    if(ans==x)
    return true;
    return false;
    
}
