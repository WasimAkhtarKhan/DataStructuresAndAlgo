//https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1
//There is also a solution in O(nlogn)

int longestSubsequence(int n, int a[])
    {
       // your code here
       int dp[n] = {1};
       for(int i=1;i<n;i++){
           dp[i] = 1;
           for(int j=0;j<i;j++){
               if(a[i]>a[j]&&dp[i]<dp[j]+1)
               dp[i] = dp[j] + 1;
           }
       }
                   
       int res = 1;
       for(int i=1;i<n;i++)
       res = max(res,dp[i]);
       
       return res;
    }
