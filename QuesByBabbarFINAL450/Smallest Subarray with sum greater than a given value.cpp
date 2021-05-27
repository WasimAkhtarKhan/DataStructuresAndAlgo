//https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1#

class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        // Your code goes here   
        int ans=INT_MAX;
        int sum=arr[0];
        for(int i=0,j=0;i<n;)
        {
            if(sum>x)
            {
                ans=min(ans,j-i+1);
                sum=sum-arr[i];
                i++;
                if(i>j)
                j=i;
            }
            else//(sum<=x)
            {
                j++;
                if(j==n)
                break;
                sum=sum+arr[j];
            }
        }
        return ans;
    }
};
