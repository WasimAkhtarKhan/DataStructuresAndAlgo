//https://practice.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1#

//Recursive Solution
int solve(int i,int j,int arr[],int n){
        if(i==j)
        return arr[i];
        
        if(j==i+1)
        return max(arr[i],arr[j]);
        
        return max(arr[i]+min(solve(i+2,j,arr,n),solve(i+1,j-1,arr,n)),arr[j]+min(solve(i+1,j-1,arr,n),solve(i,j-2,arr,n)));
}
long long maximumAmount(int arr[], int n){
    // Your code here
    return solve(0,n-1,arr,n);
}



//DP Solution(Tabulation)
long long maximumAmount(int arr[], int n){
        // Your code here
        int dp[n][n];

        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0)
                dp[i][j] = arr[i];
                else if(g==1)
                dp[i][j] = max(arr[i],arr[j]);
                else{
                    int v1 = arr[i]+min(dp[i+2][j],dp[i+1][j-1]);
                    int v2 = arr[j]+min(dp[i+1][j-1],dp[i][j-2]);
                    dp[i][j] = max(v1,v2);
                }
            }
        }
        return dp[0][n-1];
    }
