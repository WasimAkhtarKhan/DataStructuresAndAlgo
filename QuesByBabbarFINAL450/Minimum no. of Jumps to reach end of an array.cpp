//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(arr[0]>=n-1)
        return 1;
        
        int jump=0;
        int maxRange=0;
        for(int i=0;i<n-1;)
        {
            if(arr[i]==0)
                return -1;
            else
            {
                maxRange=0;
                int j=i+1;
                int counter=arr[i];
                int newIndex;
                while(counter)
                {
                    if(arr[j]+j>maxRange)
                    {
                        maxRange=max(maxRange,arr[j]+j);
                        newIndex=j;
                    }
                    counter--;
                    j++;
                }
                jump++;
                i=newIndex;
            }
            
            if(arr[i]+i >= n-1)
                return jump+1;
        }
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
