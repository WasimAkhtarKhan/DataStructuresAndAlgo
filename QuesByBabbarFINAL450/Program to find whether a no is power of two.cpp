//https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1

bool isPowerofTwo(long long n){
        // Your code here    
        int count=0;
        while(n){
            count += n&1;
            n = n>>1;
        }
        return count==1;
    }
