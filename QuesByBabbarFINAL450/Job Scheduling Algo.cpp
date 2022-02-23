//1235. Maximum Profit in Job Scheduling
//https://www.geeksforgeeks.org/weighted-job-scheduling-log-n-time/

class Solution {
public:
    int prevValid(vector<vector<int>>& jobs,int&index,vector<int>&dp){
        int l=0,r=index-1;
        int res = 0;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(jobs[mid][0]<=jobs[index][1]){
                res = dp[mid];
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return res;
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = endTime.size();
        vector<vector<int>> jobs;
        
        for(int i=0;i<n;i++) {
            jobs.push_back({endTime[i],startTime[i],profit[i]});
        }
        sort(jobs.begin(),jobs.end());
        
        vector<int>dp(n,0);
        int incluProf = jobs[0][2];
        dp[0] = jobs[0][2];
        
        for(int i=1;i<n;i++){
            incluProf = jobs[i][2] + prevValid(jobs,i,dp);
            dp[i] = max(dp[i-1],incluProf);
        }
        
        return dp[n-1];
    }
};
