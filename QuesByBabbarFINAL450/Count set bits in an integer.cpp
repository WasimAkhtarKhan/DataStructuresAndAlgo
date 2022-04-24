//https://practice.geeksforgeeks.org/problems/set-bits0143/1#

int setBits(int N) {
        // Write Your Code here
        int count=0;
        while(N){
            count += N&1;
            N>>=1;
        }
        return count;
    }
