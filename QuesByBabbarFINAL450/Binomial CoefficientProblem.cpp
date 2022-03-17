//https://practice.geeksforgeeks.org/problems/ncr1019/1#

int nCr(int n, int r){
        // code here
        if(r>n)
        return 0;
        if(r==0||r==n)
        return 1;
        
        int dp[n+1][r+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n+1;i++)
        dp[i][0] = 1;
        
        for(int i=r;i>=n;i--)
            if(i>=n)
            dp[0][i] = 1;
        
        for(int i=1;i<n+1;i++)
            for(int j=1;j<r+1;j++)
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%1000000007;
            
        return dp[n][r];
    }
