//https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1#

void heapify(int arr[],int n,int i){
        int largest = i;
        int l = 2*i+1;
        int r = 2*i+2;
        
        if(l<n && arr[l]>arr[largest])
        largest = l;
        
        if(r<n && arr[r]>arr[largest])
        largest = r;
        
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
    }
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    for(int i=n/2-1;i>=0;i--){
	        heapify(arr,n,i);
	    }
	    
	    vector<int>v;
	    for(int i=n-1;i>=n-k;i--){
	        v.push_back(arr[0]);
	        swap(arr[0],arr[i]);
	        heapify(arr,i,0);
	    }
	    return v;
	}
