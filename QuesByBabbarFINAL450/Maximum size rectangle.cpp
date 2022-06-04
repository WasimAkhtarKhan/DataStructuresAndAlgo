//https://practice.geeksforgeeks.org/problems/max-rectangle/1#
//https://leetcode.com/problems/largest-rectangle-in-histogram/

int mAH(int* arr,int m){
        stack<int>s;
        int area = 0;
        int max_area = 0;
        int i=0;
        while(i<m){
            if(s.empty()||arr[s.top()]<=arr[i])
            s.push(i++);
            else{
                int top = arr[s.top()];
                s.pop();
                area = top * i;
                if (!s.empty())
                area = top * (i - s.top() - 1);
         
                max_area = max(area, max_area);
            }
        }
        while (!s.empty()) {
            int top = arr[s.top()];
            s.pop();
            area = top * i;
            if (!s.empty())
            area = top * (i - s.top() - 1);
     
            max_area = max(area, max_area);
        }
        return max_area;
    }
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int res = mAH(M[0],m);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j])
                M[i][j] += M[i-1][j];
            }
            res = max(res,mAH(M[i],m));
        }
        return res;
    }
