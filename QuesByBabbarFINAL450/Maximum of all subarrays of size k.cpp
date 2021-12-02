//https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/
//https://leetcode.com/problems/sliding-window-maximum/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1)
            return nums;
        deque<int>dq;
        vector<int>res;
        for(int i=0;i<k;i++){
            while(dq.size()&&nums[i]>=nums[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);
        
        for(int i=k;i<nums.size();i++){
            while((!dq.empty()&&nums[i]>=nums[dq.back()]))
                dq.pop_back();
            while(!dq.empty()&&dq.front()<=i-k)
                dq.pop_front();
            
            if(dq.size()==0||nums[i]<=nums[dq.back()])
                dq.push_back(i);
                
            res.push_back(nums[dq.front()]);
        }
        return res;
    }
};
