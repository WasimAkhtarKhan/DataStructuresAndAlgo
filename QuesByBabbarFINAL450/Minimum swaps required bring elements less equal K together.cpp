//https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1

int minSwap(int *arr, int n, int k) {
    // Complet the function
    int l=0,cl=0;
    int ans=n;
    for(int i=0;i<n;i++)
    if(arr[i]<=k)
    l++;
    
    for(int i=0;i<l;i++)
    if(arr[i]<=k)
    cl++;
    
    if(l==cl)
    return 0;
    
    for(int i=0;i<n-l+1;i++)
    {
        ans=min(ans,l-cl);
        
        if(arr[i]<=k&&arr[i+l]>k)
        cl--;
        else if(arr[i]>k&&arr[i+l]<=k)
        cl++;
    }

    return ans;
}
