//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1#

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>res(2,-1);
    int l=0,r=n-1;
    int mid;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]>x)
        r = mid-1;
        else if(arr[mid]<x)
        l = mid+1;
        else
        break;
    }
    
    if(arr[mid]!=x)
    return res;

    l=mid;
    r=mid;
    
    while(arr[l]==x&&l>=0){
        res[0] = l;
        l--;
    }
    while(arr[r]==x&&r<n){
        res[1] = r;
        r++;
    }
    
    return res;
}
