//https://practice.geeksforgeeks.org/problems/maximize-sum-after-k-negations1149/1#

long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        long long int mn = INT_MAX;
        long long int sum = 0;
        for(int i=0;i<n;i++){
            mn = min(mn,abs(a[i]));
            if(a[i]<0&&k){
                sum += -a[i];
                k--;
            }
            else
            sum += a[i];
        }
        if(k&1){
            return sum -= 2*mn;
        }
        return sum;
    }
