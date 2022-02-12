//https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1#

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
        ll res=0;
        unordered_map<ll,int>umap;
        umap[0]++;
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            umap[sum]++;
        }
        for(auto &it:umap){
            int num=it.second;
            res+= (num*(num-1))/2;
        }
        return res;
    }
};
