//https://practice.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1/#

int search(int arr[], int n, int x, int k)
{
    // Complete the function	
    for(int i=0;i<n;){
        if(arr[i]==x)
        return i;
        
        if(abs(x-arr[i])>k)
        i += abs(x-arr[i])/k;
        else
        i++;
    }
    return -1;
}
