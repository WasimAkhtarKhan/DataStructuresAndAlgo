//https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

bool isValid(int* A,int&N,int&M,int&mid){
        int s=1;
        int pages=0;
        for(int i=0;i<N;i++){
            if(A[i]>mid)
            return false;
            
            pages += A[i];
            if(pages>mid){
                pages=A[i];
                s++;
            }
            if(s>M)
            return false;
        }
        return true;
    }
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(N<M)
        return -1;
        
        int l = 0;
        int r = 0;
        for(int i=0;i<N;i++)
        r += A[i];
 
        int res = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(isValid(A,N,M,mid)){
                res = mid;
                r = mid-1;
            }
            else
            l = mid+1;
        }
        return res;
    }
