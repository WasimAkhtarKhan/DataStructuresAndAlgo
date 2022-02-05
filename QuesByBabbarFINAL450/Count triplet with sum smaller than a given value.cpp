//https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1#

long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    long long res=0;
	    sort(arr,arr+n);
	    int i=0,j=i+1,k=n-1;
	    while(i<n-2){
	        j=i+1;
	        k=n-1;
	        if(arr[i]>=sum)
	        break;
	        int s2=sum-arr[i];
	        while(j<k){
	            if(arr[j]+arr[k]>=s2&&j<k){
	                k--;
	            }
	            else{
	                res+= k-j;
	                j++;
	            }
	        }
	        i++;
	    }
	    return res;
	}
