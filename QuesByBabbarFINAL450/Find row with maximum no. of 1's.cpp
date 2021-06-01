//https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#
//Method 1:O(N+M)

class Solution{
public:
    int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int r = 0;              // keeps track of row; starts at first row             
        int c = m-1;            // keeps track of column; starts at last column
        int max_row_index=-1;   // keeps track of result row index
        
        // starting from top right corner
        // go left if you encounter 1
        // do down if you encounter 0
        while(r<n && c>=0)
        {
            if(arr[r][c]==1)
            {
                max_row_index = r;
                c--;
            }
            else
                r++;
        }
        return max_row_index;
    }
};


//Method 2:O(N*M)
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
