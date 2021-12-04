//https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1#

void heapify(vector<int>&a,int size,int i){
        int largest = i;
        int l = 2*i+1;
        int r = 2*i+2;
        
        if(l<size&&a[l]>a[largest])
        largest = l;
        
        if(r<size&&a[r]>a[largest])
        largest = r;
        
        if(largest != i){
            swap(a[i],a[largest]);
            heapify(a,size,largest);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
        }
        
        for(int j=a.size()/2;j>=0;j--)
        heapify(a,n+m,j);
        
        return a;
    }
