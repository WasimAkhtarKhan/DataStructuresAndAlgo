//https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        for(int i=0;i<=n;i++)
        {
            if(!s.count(nums[i]))
                s.insert(nums[i]);
            else
                return nums[i];
        }
    return -1;
    }
};
