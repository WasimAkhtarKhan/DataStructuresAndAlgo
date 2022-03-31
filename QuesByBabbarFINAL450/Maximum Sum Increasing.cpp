//https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int dp[n];
	    memset(dp,0,sizeof(dp));
	    for(int i=0;i<n;i++){
	        dp[i] = arr[i];
	        for(int j=0;j<i;j++)
	            if(arr[i]>arr[j]&&dp[i]<dp[j]+arr[i])
	                dp[i] = dp[j] + arr[i];
	    }
	    
	    int res = dp[0];
	    for(int i=1;i<n;i++)
	    res = max(res,dp[i]);
	    return res;
	}
