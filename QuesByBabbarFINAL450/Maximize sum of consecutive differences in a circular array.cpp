//https://practice.geeksforgeeks.org/problems/swap-and-maximize5859/1#

long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    vector<int>v;
    long long int sum = 0;
    for(int i=0;i<n/2;i++){
        v.push_back(arr[i]);
        v.push_back(arr[n-1-i]);
    }
    if(n&1)
    v.push_back(arr[n/2]);
    for(int i=0;i<v.size()-1;i++)
    sum += abs(v[i]-v[i+1]);
    
    return sum+abs(v[0]-v[v.size()-1]);
}
