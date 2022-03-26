//https://practice.geeksforgeeks.org/problems/coin-change2448/1#

long long int count(int S[], int m, int n) {
        // code here.
        long long int dp[m+1][n+1];
        for(int i=1;i<=n;i++)
        dp[0][i] = 0;
        for(int i=0;i<=m;i++)
        dp[i][0] = 1;
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(S[i-1]<=j)
                dp[i][j] = dp[i-1][j] + dp[i][j-S[i-1]];
                else
                dp[i][j] = dp[i-1][j];
            }
        }
        return dp[m][n];
    }

//We can further optimise space because we are using only previous rows by using only 2 rows alternatively
