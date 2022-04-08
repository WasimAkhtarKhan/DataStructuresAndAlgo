//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#

long long maxSubarraySum(int arr[], int n){
        // Your code here
        long long best = INT_MIN;
        long long sum  = 0;
        for(int i=0;i<n;i++){
            sum = max(sum+arr[i],(long long)arr[i]);
            best = max(best,sum);
        }
        return best;
    }
