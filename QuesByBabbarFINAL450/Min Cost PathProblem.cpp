//Maximum path sum in matrix
//https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1

int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int n = Matrix.size();
        int m = Matrix[0].size();
        int arr[n][m];
        memset(arr,0,sizeof arr);
        for(int i=0;i<m;i++)
        arr[0][i] = Matrix[0][i];
        
        int res = 0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                arr[i+1][j] = max(arr[i+1][j],arr[i][j]+Matrix[i+1][j]);
                if(j!=0)
                arr[i+1][j-1] = max(arr[i+1][j-1],arr[i][j]+Matrix[i+1][j-1]);
                if(j!=m-1)
                arr[i+1][j+1] = max(arr[i+1][j+1],arr[i][j]+Matrix[i+1][j+1]);
            }
        }
        
        for(int j=0;j<m;j++)
        res = max(res,arr[n-1][j]);
        return res;
    }
