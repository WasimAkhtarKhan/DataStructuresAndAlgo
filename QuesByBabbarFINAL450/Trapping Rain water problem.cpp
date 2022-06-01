//https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1#

long long trappingWater(int arr[], int n){
        // code here
        vector<int>l(n,0);
        vector<int>r(n,0);
        l[0] = arr[0];
        r[n-1] = arr[n-1];
        for(int i=1;i<n-1;i++){
            l[i] = max(l[i-1],arr[i]);
            r[n-i-1] = max(r[n-i],arr[n-i-1]);
        }
        long long sum = 0;
        for(int i=1;i<n-1;i++)
            sum += (min(l[i],r[i]) - arr[i]);
        return sum;
    }
