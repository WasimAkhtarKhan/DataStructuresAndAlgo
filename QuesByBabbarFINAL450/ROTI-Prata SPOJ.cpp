//https://www.spoj.com/problems/PRATA/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int cP(int S,int a){
	return (-1+sqrt(1+(8*S)/a))/2;
}

bool isPossible(int p,int cook[],int n,int mid){

    int cnt = 0;
    for(int i=0;i<n;i++){
 		cnt += cP(mid,cook[i]);
        if(cnt >= p)
            return true;
    }
    return false;
}

int minTime(int p,int cook[],int n){
    int s = 0, e = 10000007;
    int mid,ans=-1;

    while(s<=e){
        mid = (s+e)/2;
        if(isPossible(p,cook,n,mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int n;
        cin>>n;
        int cook[n];
        for(int i=0;i<n;i++)
            cin>>cook[i];

        cout<<minTime(p,cook,n)<<endl;
    }

    return 0;
}
