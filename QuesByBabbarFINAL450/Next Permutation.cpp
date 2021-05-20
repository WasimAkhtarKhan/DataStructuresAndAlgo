//https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n=nums.size();
        for(int i=n-1;i>=1;i--)
        {
            if(nums[i]>nums[i-1])
            {
                int temp=nums[i-1];
                for(int j=n-1;j>=i;j--)
                {
                    if(nums[j]>temp)
                    {
                        swap(nums[i-1],nums[j]);
                        sort(nums.begin()+i,nums.end());
                        return ;
                    }
                }
            }
        }
        sort(nums.begin(),nums.end());
        return ;
    }
};
