//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#

long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        long long res = LONG_LONG_MAX;
        for(long long i=0;i+m-1<n;i++)
        res = min(res,(a[i+m-1]-a[i]));
        return res;
    }
