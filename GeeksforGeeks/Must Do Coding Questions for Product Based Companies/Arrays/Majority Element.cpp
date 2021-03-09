//https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        sort(a,a+size);
        
        if(size==1)
        return a[0];
        
        int counter=1;
        for(int i=0;i<size;i++)
        {
            if(a[i]==a[i+1])
            {
                counter++;
                if(counter>size/2)
                {
                    return a[i];
                }
            }
            else{
                counter=1;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
