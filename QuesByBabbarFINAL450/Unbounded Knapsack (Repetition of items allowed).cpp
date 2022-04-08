//https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1#

//Efficient Approach
int knapSack(int N, int W, int val[], int wt[])
    {
        vector<int> dp(W+1 , 0);
        int ans =0;

        for(int i=0; i<W+1; i++)
          for (int j=0; j<N; j++)
            if(wt[j]<= i)
              dp[i] = max(dp[i], dp[i - wt[j]] + val[j]) ;
        return dp[W];
    }

//Another Approach
int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int dp[N+1][W+1];
        for(int i=0;i<=W;i++)
        dp[0][i] = 0;
        
        for(int i=0;i<=N;i++)
        dp[i][0] = 0;
        
        for(int i=1;i<=N;i++){
            for(int j=1;j<=W;j++){
                if(j>=wt[i-1])
                dp[i][j] = max(dp[i-1][j],val[i-1]+dp[i][j-wt[i-1]]);
                else
                dp[i][j] = dp[i-1][j];
            }
        }
        return dp[N][W];
    }

