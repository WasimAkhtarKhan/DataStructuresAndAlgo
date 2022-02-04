//https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1#

bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    int i=0,j=1;
    
    while(i<size&&j<size){
        if(arr[j]-arr[i]==n)
        return 1;
        else if(arr[j]-arr[i]<n)
        j++;
        else
        i++;
    }
    
    return 0;
}
