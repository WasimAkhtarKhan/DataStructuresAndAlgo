//https://practice.geeksforgeeks.org/problems/combination-sum-1587115620/1#

void backtracking(int index,int n,vector<int>&arr,int sum,vector<vector<int>>&res,vector<int>v){
        if(sum==0){
            res.push_back(v);
            return;
        }
        if(sum<0||index>=n)
        return;
        
        v.push_back(arr[index]);
        backtracking(index,n,arr,sum-arr[index],res,v);
        v.pop_back();
        
        backtracking(index+1,n,arr,sum,res,v);
    }
    
    vector<vector<int>>combinationSum(vector<int> &A, int B) {
        // Your code here
        sort(A.begin(),A.end());
    	vector<vector<int> > res;
    	vector<int> current, C;
    	int i,j;
    	
    	//storing only distinct elements in list C.
    	for(i=0;i<A.size();i++)
    	{
    	    j=i+1;
    	    while(j<A.size()&&A[i]==A[j]){
    	        j++;
    	    }
    	    C.push_back(A[i]);
    	    i=j-1;
    	}
    	int n = C.size();
    	backtracking(0,n,C,B,res,current);
        return res;
    }
