//https://leetcode.com/problems/search-insert-position/


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(target<=nums[i])
                break;
            else
                count++;
        }
        return count;
    }
};
