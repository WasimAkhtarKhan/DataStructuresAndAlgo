//https://practice.geeksforgeeks.org/problems/count-element-occurences/1

class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int c=n/k;
        
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++)
            umap[arr[i]]++;
            
        int ans=0;
        for(auto i:umap)
            if(i.second>c)
                ans++;
        
        return ans;
    }
};
