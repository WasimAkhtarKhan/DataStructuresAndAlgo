//https://practice.geeksforgeeks.org/problems/maximum-sum-rectangle2948/1#

int maxSum(int* temp,int R){
        int s = 0;
        int best = INT_MIN;
        for(int i=0;i<R;i++){
            s = max(temp[i],s+temp[i]);
            best = max(best,s);
        }
        return best;
    }
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        int temp[R];
        int res = INT_MIN;
        for(int l=0;l<C;l++){
            memset(temp,0,sizeof temp);
            for(int r=l;r<C;r++){
                for(int i=0;i<R;i++){
                    temp[i] += M[i][r];
                }
                int mSum = maxSum(temp,R);
                res = max(res,mSum);
            }
        }
        return res;
    }
