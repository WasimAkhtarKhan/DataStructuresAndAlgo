//https://practice.geeksforgeeks.org/problems/arithmetic-number2815/1

int inSequence(int A, int B, int C){
        // code here
        if(C==0){
            if(A==B)
            return 1;
            return 0;
        }
        if(C>0&&A>B)
        return 0;
        if(C<0&&A<B)
        return 0;

        B = B - A;
        if(B%C==0)
            return 1;
        return 0;
    }
