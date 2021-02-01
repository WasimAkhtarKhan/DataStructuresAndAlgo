//https://leetcode.com/problems/sort-the-matrix-diagonally/


class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int col=mat[0].size();
        int row=mat.size();
        
        for(int y=0;y<col;y++)
        {   
            
            vector<int>v;
            for(int i=0,j=y;i<row and j<col;i++,j++)
            {
                v.push_back(mat[i][j]);
            }
            sort(v.begin(),v.end());
            
            int counter=0;
            for(int k=0,l=y;k<row and l<col;k++,l++)
            {
                mat[k][l]=v[counter];
                counter++;
            }
        }
       
        for(int x=1;x<row;x++)
        {
            
            vector<int>v;
            for(int i=x,j=0;i<row&&j<col;i++,j++)
            {
                v.push_back(mat[i][j]);
            }
            sort(v.begin(),v.end());
            
            int counter=0;
        for(int k=x,l=0;k<row&&l<col;k++,l++)
        {
            mat[k][l]=v[counter];
            counter++;
        }
        }
        
        return mat;
    }
};
