//https://practice.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1#

int Maximize(int a[],int n)
    {
        // Complete the function
        int mod = 1e9+7;
        unsigned long long int sum = 0;
        sort(a,a+n);
        for(int i=1;i<n;i++){
            sum += ((unsigned long long)a[i]*i)%mod;
            sum = sum%mod;
        }
        return sum;
    }
