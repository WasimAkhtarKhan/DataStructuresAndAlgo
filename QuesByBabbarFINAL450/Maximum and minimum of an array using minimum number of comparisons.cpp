//https://practice.geeksforgeeks.org/problems/middle-of-three2926/1

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if(A>B)
        return (B>C)?B:min(A,C);
        
        return (B>C)? max(A,C):B;
    }
};
