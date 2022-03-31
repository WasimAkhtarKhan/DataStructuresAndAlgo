//https://practice.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1#

int longestSubsequence(int N, int A[])
    {
        // code here
        int dp[N];
        for(int i=0;i<N;i++)
        dp[i] = 1;
        
        for(int i=1;i<N;i++){
            for(int j=0;j<i;j++){
                if(abs(A[i]-A[j])==1)
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        int res = 1;
        for(int i=0;i<N;i++)
        res = max(res,dp[i]);
        
        return res;
    }

//Efficient Solution
int longestSubsequence(int n, int arr[])
    {
        if(n==1)
            return 1;
        unordered_map<int,int> mapp;
        int res = 1;
        for(int i=0;i<n;i++){
            if(mapp.count(arr[i]+1) >0 || mapp.count(arr[i]-1)>0){
                mapp[arr[i]]=1+max(mapp[arr[i]+1],mapp[arr[i]-1]);
            }
            else
                mapp[arr[i]]=1;
            res = max(res, mapp[arr[i]]);
        }
        return res;
    }
