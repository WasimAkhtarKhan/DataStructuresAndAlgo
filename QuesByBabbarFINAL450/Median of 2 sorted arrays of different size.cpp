//https://leetcode.com/problems/median-of-two-sorted-arrays/


//Method 1:Time:O(m+n)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int n3=n+m;
        int count=0;
        
        if(n3%2==1)
        {
            int i=0,j=0,m1;
            for(int count=0;count<=n3/2;count++)
            {
            if(i!=n&&j!=m)
            m1=(nums1[i]>nums2[j])?nums2[j++]:nums1[i++];
            else if(i<n)
            m1=nums1[i++];
            else
            m1=nums2[j++];
            }
            return m1;
        }
        else
        {
            int i=0,j=0,m1=-1,m2=-1;
            for(int count=0;count<=n3/2;count++)
            {
            m2=m1;
            if(i!=n&&j!=m)
            m1=(nums1[i]>nums2[j])?nums2[j++]:nums1[i++];
            else if(i<n)
            m1=nums1[i++];
            else
            m1=nums2[j++];
            }
            return (double)(m1+m2)/2;
        }
    }
};

//Method 2:Time:O(nlogn)
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
