//https://practice.geeksforgeeks.org/problems/minimum-swaps/1#

int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<int>v=nums;
	    sort(v.begin(),v.end());
	    int res=0;
	    unordered_map<int,int>m;
	    for(int i=0;i<nums.size();i++){
	        m[nums[i]]=v[i];
	    }
	    
	    for(int i=0;i<nums.size();i++){
	        int count=0;
	        int num=nums[i];
	        while(m[num]!=-1){
	            count++;
	            int n=m[num];
	            m[num]=-1;
	            num = n;
	        }
	        if(count){
	            count--;
	            res+=count;
	        }
	    }
	    return res;
	}
