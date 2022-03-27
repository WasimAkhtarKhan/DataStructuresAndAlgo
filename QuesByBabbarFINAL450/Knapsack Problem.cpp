//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

//Recursive Solution
int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(n==0||W==0)
       return 0;
       
       if(wt[n-1]>W)
       return knapSack(W,wt,val,n-1);
       
       return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
    }

//DP
int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int dp[n+1][W+1];
       for(int i=0;i<=W;i++)
       dp[0][i] = 0;
       for(int i=1;i<=n;i++)
       dp[i][0] = 0;
       
       for(int i=1;i<=n;i++){
           for(int j=1;j<=W;j++){
               if(j>=wt[i-1])
               dp[i][j] = max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
               else
               dp[i][j] = dp[i-1][j];
           }
       }
       return dp[n][W];
    }
