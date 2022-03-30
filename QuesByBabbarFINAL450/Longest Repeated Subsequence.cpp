//https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1#

int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int dp[y][x];
        memset(dp,0,sizeof dp);
        
        int i=0;
        for(i=0;i<x;i++)
        if(s1[i]==s2[0])
        break;
        while(i<x){
            dp[0][i] = 1;
            i++;
        }
        
        i=0;
        for(i=0;i<y;i++)
        if(s1[0]==s2[i])
        break;
        while(i<y){
            dp[i][0] = 1;
            i++;
        }
        
        for(int i=1;i<y;i++){
            for(int j=1;j<x;j++){
                if(s2[i]==s1[j])
                dp[i][j] = 1+dp[i-1][j-1];
                else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[y-1][x-1];
    }
