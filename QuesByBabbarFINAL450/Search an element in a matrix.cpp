//https://leetcode.com/problems/search-a-2d-matrix/

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size()-1;
        int c = matrix[0].size()-1;
        int cr = 0;
        int cc = 0;
        while(cr<=r){
            int mid = (cr+r)/2;
            if(matrix[mid][c]==target)
                return true;
            else if(matrix[mid][c]<target)
                cr = mid+1;
            else
                r = mid-1;
        }
        if(cr==matrix.size())
            return false;
        while(cc<=c){
            int mid = (cc+c)/2;
            if(matrix[cr][mid]==target)
                return true;
            else if(matrix[cr][mid]<target)
                cc = mid+1;
            else
                c = mid-1;
        }
        return false;
    }
