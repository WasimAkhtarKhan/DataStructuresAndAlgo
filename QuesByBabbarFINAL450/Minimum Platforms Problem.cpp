//https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

//My Solution - Greedy Method,Brute Force
struct compare{
  bool operator()(int a,int b){
    return a>b;
  }
};
    
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int res = 0;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(arr[i],dep[i]));
        }
        sort(v.begin(),v.end());
        int i=0,d=0;
        priority_queue<int,vector<int>,compare>pq;
        
        for(int i=0;i<n;i++){
            while(pq.size()&&pq.top()<v[i].first)
                pq.pop();
            
            pq.push(v[i].second);
            int s = pq.size();
            res = max(res,s);
        }
        return res;
    }
};

//Most Optimised Solution
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<pair<int,char>>v;
    	for(int i=0;i<n;i++){
    	    v.push_back(make_pair(arr[i],'a'));
    	    v.push_back(make_pair(dep[i],'d'));
    	}
    	sort(v.begin(),v.end());
    	int plat_need=0;
    	int res = 0;
    	for(int i=0;i<v.size();i++){
    	    if(v[i].second=='a')
    	    plat_need++;
    	    else
    	    plat_need--;
    	    
    	    res = max(res,plat_need);
    	}
    	return res;
    }
};
