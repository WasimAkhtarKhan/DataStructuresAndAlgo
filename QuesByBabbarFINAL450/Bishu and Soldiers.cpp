//https://www.hackerearth.com/problem/algorithm/bishu-and-soldiers-227/

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int arr2[],int n,int N){
    int res[2]={0};
    
    int r = upper_bound(arr,arr+N,n)-arr;
    res[0]=r;
    res[1]=arr2[r-1];
    
    cout<<res[0]<<" "<<res[1]<<endl;
}

int main(){
    int N;
    cin>>N;
    int *arr=(int*)malloc(sizeof(int)*N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int Q;
    cin>>Q;

    sort(arr,arr+N);

    int *arr2=(int*)malloc(sizeof(int)*N);
    arr2[0]=arr[0];  
    for(int i=1;i<N;i++)
    arr2[i] += arr2[i-1]+arr[i];

    for(int i=0;i<Q;i++){
        int n;
        cin>>n;
        solve(arr,arr2,n,N);
    }
    return 0;
}
