//https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1#

int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        
        int res = 0;
        for(int i=0;i<n;i++)
        res = max(res,mat[i][0]);
        for(int j=0;j<m;j++)
        res = max(res,mat[0][j]);
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(mat[i][j]){
                    mat[i][j] = 1 + min(mat[i-1][j-1],min(mat[i-1][j],mat[i][j-1]));
                    res = max(res,mat[i][j]);
                }
            }
        }
        return res;
    }
