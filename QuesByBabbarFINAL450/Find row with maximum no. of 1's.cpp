//https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code 
	    int i=0,j=0;
	    while(arr[i][j]==0&&i<n&&j<m)
	    {
	        i++;
	        if(i==n)
	        {
	            j++;i=0;
	        }
	    }
	    if(i!=n&&j!=m)
	    return i;
	    else
	    return -1;
	}

};
