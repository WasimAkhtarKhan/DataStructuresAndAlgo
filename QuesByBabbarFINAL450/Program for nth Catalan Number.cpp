//https://www.geeksforgeeks.org/program-nth-catalan-number/
//https://practice.geeksforgeeks.org/problems/geek-and-his-binary-strings1951/1/#

//Recursive (TLE)
int prefixStrings(int n)
	{
	    // Your code goes here
	    if (n <= 1)
        return 1;
 
    // catalan(n) is sum of
    // catalan(i)*catalan(n-i-1)
    unsigned long int res = 0;
    for (int i = 0; i < n; i++)
        res += prefixStrings(i)
            * prefixStrings(n - i - 1);
 
    return res;
	}

//DP
int prefixStrings(int N)
	{
	    // Your code goes here
	    long long dp[N+1];
		int mod = (int)(1e9 + 7);
		dp[0] = dp[1] = 1;
 
	    for (int i = 2; i <= N; i++)
	    {
	        dp[i] = 0;
	        for (int j = 0; j < i; j++)
	        dp[i] = (dp[i] + (dp[j] * dp[i-j-1])%mod)%mod;
	    }

	    return (int)(dp[N]);
	}
