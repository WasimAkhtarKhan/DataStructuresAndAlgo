//https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1/#

bool isValid(long long m,int *arr,int&n,int k){
        int t=0;
        int p=0;
        for(int i=0;i<n;i++){
            if(arr[i]>m)
            return false;
            
            t += arr[i];
            if(t>m){
                p++;
                t = arr[i];
            }
        }
        if(p<k)
        return true;
        return false;
    }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long l = INT_MAX;
        long long r = 0;
        int res = INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<l)
            l = arr[i];
            r += arr[i];
        }
        while(l<=r){
            long mid = l + (r-l)/2;
            if(isValid(mid,arr,n,k)){
                res = mid;
                r = mid-1;
            }
            else
            l = mid+1;
        }
        return res;
    }
