//https://www.geeksforgeeks.org/gold-mine-problem/
//https://practice.geeksforgeeks.org/problems/gold-mine-problem2608/1/#

int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        int res = 0;
        if(n==1){
            for(int i=0;i<m;i++)
            res += M[0][i];
            return res;
        }
        
        int dp[n][m];
        memset(dp,0,sizeof dp);
        
        for(int c=0;c<m;c++){
            for(int r=0;r<n;r++){
                if(c==0)
                dp[r][c] = M[r][0];
                else if(r==0)
                dp[r][c] = M[r][c] + max(dp[r][c-1],dp[r+1][c-1]);
                else if(r==n-1)
                dp[r][c] = M[r][c] + max(dp[r][c-1],dp[r-1][c-1]);
                else
                dp[r][c] = M[r][c] + max(dp[r][c-1],max(dp[r+1][c-1],dp[r-1][c-1]));
                
                if(c==m-1)
                res = max(res,dp[r][m-1]);
            }
        }
        return res;
    }
