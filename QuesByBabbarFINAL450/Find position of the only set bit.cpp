//https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1#

int findPosition(int N) {
        // code here
        if(N==0)
        return -1;
        int res = 0;
        while(N){
            int c = N&1;
            N>>=1;
            res++;
            if(c==1&&N==0)
            return res;
            else if(c==1&&N!=0)
            return -1;
        }
        return -1;
    }
