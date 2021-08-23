//https://leetcode.com/problems/maximum-matrix-sum/

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int ncount=0;
        long long nm=abs(matrix[0][0]);
        long long ans=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                ans += abs(matrix[i][j]);
                if(matrix[i][j]<=0)
                {
                    ncount++;
                    if(abs(matrix[i][j])<nm)
                        nm=abs(matrix[i][j]);
                }
                else if(matrix[i][j]<nm)
                    nm=matrix[i][j];
            }
        }
        if(ncount%2==0)
            return ans;
        else
            return ans-2*nm;
    }
};
