//https://leetcode.com/contest/weekly-contest-265/problems/smallest-index-with-equal-value/

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(i%10==nums[i])
                ans=i;
            if(ans!=-1)
                break;
        }
        return ans;
    }
};
