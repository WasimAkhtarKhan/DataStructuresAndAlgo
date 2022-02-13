//https://practice.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1

void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr,arr+n,[](int a,int b){return __builtin_popcount(b) < __builtin_popcount(a);});
    }
