//https://leetcode.com/problems/maximum-length-of-pair-chain/

static bool fun(vector<int>&v1,vector<int>&v2){
        if(v1[0]<v2[0])
            return true;
        else if(v1[0]==v2[0]&&v1[1]>v2[1])
            return true;
        return false;
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        int res = 0;
        int l = INT_MIN;
        sort(pairs.begin(),pairs.end(),fun);
        int n = pairs.size();
        int dp[n];
        for(int i=0;i<n;i++)
        dp[i] = 1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(pairs[j][1]<pairs[i][0])
                    dp[i] = max(dp[i],dp[j]+1);
            }
        }
        return dp[n-1];
    }
