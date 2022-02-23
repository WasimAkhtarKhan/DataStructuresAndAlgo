//https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1

int findNum(int n)
    {
        //complete the function here
        int l=0,r=INT_MAX;
        int res = r;
        while(l<=r){
            int sum = 0;
            int mid = (l+r)/2;
            int z=0;
            int a = mid;
            while(a){
                sum += a/5;
                a /= 5;
            }
            if(sum>=n){
                res = mid;
                r=mid-1;
            }
            else
            l = mid+1;
        }
        return res;
    }
