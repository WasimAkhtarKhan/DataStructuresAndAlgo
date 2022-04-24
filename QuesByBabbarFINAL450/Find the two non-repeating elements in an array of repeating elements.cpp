//https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1/#

vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int x = 0;
        for(int i=0;i<nums.size();i++)
        x ^= nums[i];
        
        int bm = x & -x;
        
        int a = 0;
        int b = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&bm)
            a ^= nums[i];
            else
            b ^= nums[i];
        }
        
        if(a<b)
        return {a,b};
        else
        return {b,a};
    }
