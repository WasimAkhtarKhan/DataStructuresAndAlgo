//https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#
//https://www.geeksforgeeks.org/subset-sum-problem-osum-space/

int equalPartition(int N, int arr[])
    {
        // code here
        int target = 0;
        for(int i=0;i<N;i++)
            target += arr[i];
            
        if(target%2)
        return false;
        
        target /= 2;
        
        bool dp[N+1][target+1];
        
        for(int i=0;i<=N;i++)
        dp[i][0] = true;
        
        for(int i=1;i<=target;i++)
        dp[0][i] = false;
        
        for(int i=1;i<=N;i++){
            for(int j=1;j<=target;j++){
                if(j<arr[i-1])
                dp[i][j] = dp[i-1][j];
                else
                dp[i][j] = (dp[i-1][j]||dp[i-1][j-arr[i-1]]);
            }
        }
        
        return dp[N][target];
    }
