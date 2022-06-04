//https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/
//https://leetcode.com/problems/rotate-image/

void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        swap(matrix[i][j],matrix[j][i]);
        
        for(int i=0;i<n;i++)
        for(int j=0;j<n/2;j++)
        swap(matrix[i][j],matrix[i][n-1-j]);
        
        return;
    }
//Another Solution
void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n/2+n%2;i++){
            for(int j=0;j<n/2;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n-1-j][i];
                matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                matrix[j][n-1-i] = temp;
            }
        }
        return;
    }
