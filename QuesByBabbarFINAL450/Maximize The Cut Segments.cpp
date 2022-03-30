//https://practice.geeksforgeeks.org/problems/cutted-segments1642/1#
//https://www.geeksforgeeks.org/maximize-the-number-of-segments-of-length-p-q-and-r/

int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        int arr[3];
        arr[0] = x;
        arr[1] = y;
        arr[2] = z;
        
        int dp[n+1];
        memset(dp,0,sizeof dp);
        
        for(int i=0;i<3;i++){
            for(int j=1;j<=n;j++){
                if(j==arr[i] || (j>arr[i] && dp[j-arr[i]]>0))
                dp[j] = max(dp[j],dp[j-arr[i]]+1);
            }
        }
        return dp[n];
    }
