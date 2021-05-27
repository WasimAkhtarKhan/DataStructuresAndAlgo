//https://practice.geeksforgeeks.org/problems/find-the-median0527/1

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    int N=v.size();
		    sort(v.begin(),v.end());
		    
		    if(N%2==1)
		    return v[N/2];
		    else
		    return (v[N/2]+v[(N/2)-1])/2;
		}
};
