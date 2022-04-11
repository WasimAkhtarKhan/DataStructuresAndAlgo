//https://www.geeksforgeeks.org/longest-palindromic-subsequence-dp-12/
//https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1/

int longestCommonSubseq(string&A,string&B){
        int n = A.size();
        reverse(B.begin(),B.end());
        int dp[n+1][n+1];

        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0)
                dp[i][j] = 0;
                else if(A[i-1]==B[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
                else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][n];
    }  
    int longestPalinSubseq(string A) {
        //code here
        string B = A;
        return longestCommonSubseq(A,B);
    }
