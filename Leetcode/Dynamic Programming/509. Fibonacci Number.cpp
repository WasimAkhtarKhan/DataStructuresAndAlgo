//https://leetcode.com/problems/fibonacci-number/

class Solution {
public:

    int fib(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        vector<int>v(n+1,0);
        v[1] = 1;
        for(int i=2;i<=n;i++){
            v[i] = v[i-1] + v[i-2];
        }
        return v[n];
    }
};
