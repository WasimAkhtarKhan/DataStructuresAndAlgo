//https://www.geeksforgeeks.org/sum-minimum-maximum-elements-subarrays-size-k/

// C++ program to find sum of all minimum and maximum
// elements Of Sub-array Size k.
#include<bits/stdc++.h>
using namespace std;

// Returns sum of min and max element of all subarrays
// of size k
int SumOfKsubArray(int arr[] , int n , int k)
{
    int mn = INT_MAX;
    int mx = INT_MIN;
    deque<int>q;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
        mn = min(mn,arr[i]);
        mx = max(mx,arr[i]);
        q.push_back(arr[i]);
    }
    int sum = mx+mn;
    cout<<mx<<" "<<mn<<"\n";
    cout<<"Sum =  " <<sum<<"\n";
    for(int i=k;i<n;i++){
        q.push_back(arr[i]);
        if(arr[i]<mx&&arr[i]>mn)
        q.pop_front();
        else{
            q.pop_front();
            mn = INT_MAX;
            mx = INT_MIN;
            for(auto it = q.begin();it!=q.end();it++){
                mn = min(mn,*it);
                mx = max(mx,*it);
            }
        }
        sum += mx+mn;
        cout<<"Sum =  " <<sum<<"\n";
    }
    return sum;
}

// Driver program to test above functions
int main()
{
	int arr[] = {2, 5, -1, 7, -3, -1, -2} ;
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 4;
	cout << SumOfKsubArray(arr, n, k) ;
	return 0;
}
