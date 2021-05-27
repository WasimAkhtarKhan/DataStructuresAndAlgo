//https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>num;
        for(int i=0;i<nums1.size();i++)
            num.push_back(nums1[i]);
      
        for(int i=0;i<nums2.size();i++)
            num.push_back(nums2[i]);
      
        int n=num.size();
        sort(num.begin(),num.end());
      
        if(n%2==0)
            return ((float)(num[(n/2)-1]+num[n/2])/2);
        else
            return num[n/2];
    }
};
