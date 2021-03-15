//https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1#

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 
void frequencycount(vector<int>& arr,int n);

 // } Driver Code Ends

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencycount(vector<int>& arr,int n)
    { 
        for(int i=0;i<arr.size();i++)
        {
            arr[i]--;
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[arr[i]%n]=arr[arr[i]%n]+n;
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=arr[i]/n;
        }
    }
};


// { Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int n;
	    //size of array
	    cin >> n; 
	    
	    vector<int> arr(n,0);
	    
	    //adding elements to the vector
	    for(int i = 0;i<n;i++){
	        cin >> arr[i]; 
	    }

        Solution ob;
        //calling frequncycount() function
		ob.frequencycount(arr,n); 
		
		//printing array elements
	    for (int i =0; i<n; i++) 
			cout<<arr[i]<<" ";
	    cout<<endl;
	}	
	return 0; 
}




  // } Driver Code Ends
