//https://practice.geeksforgeeks.org/problems/minimum-cost-to-fill-given-weight-in-a-bag1956/1#

int minimumCost(int cost[], int N, int W) 
	{ 
        // Your code goes here
        long long int dp[N+1][W+1];
        for(int i=0;i<=W;i++)
        dp[0][i] = INT_MAX;
        for(int i=1;i<=N;i++)
        dp[i][0] = 0;
        
        for(int i=1;i<=N;i++){
            for(int j=1;j<=W;j++){
                if(cost[i-1]==-1)
                dp[i][j] = dp[i-1][j];
                else if(i<=j)
                dp[i][j] = min(dp[i-1][j],cost[i-1]+dp[i][j-i]);
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        return dp[N][W]==INT_MAX ? -1 : dp[N][W];
	} 
