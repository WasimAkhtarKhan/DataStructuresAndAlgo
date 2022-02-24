//https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#

void merge(long long s,long long m,long long l,long long arr[],long long int&res){
        long long n1 = m-s+1;
        long long n2 = l-m;
        long long *a1 = new long long[n1];
        long long *a2 = new long long[n2];
        
        for(long long i=0;i<n1;i++)
        a1[i]=arr[s+i];
        for(long long i=0;i<n2;i++)
        a2[i]=arr[i+m+1];
        
        long long i=0,k=s,j=0;
        while(i<n1&&j<n2){
            if(a1[i]>a2[j]){
                arr[k]=a2[j];
                res+=n1-i;
                k++;
                j++;
            }
            else{
                arr[k]=a1[i];
                i++;
                k++;
            }
        }
        while(i<n1){
            arr[k++]=a1[i++];
        }
        while(j<n2){
            arr[k++]=a2[j++];
        }
    }
    
    void mergeSort(long long s,long long l,long long *arr,long long int&res){
        if(s>=l)
        return;
        
        long long mid = s+(l-s)/2;
        mergeSort(s,mid,arr,res);
        mergeSort(mid+1,l,arr,res);
        merge(s,mid,l,arr,res);
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int res = 0;
        long long i=0;
        mergeSort(0,N-1,arr,res);
        
        return res;
    }
