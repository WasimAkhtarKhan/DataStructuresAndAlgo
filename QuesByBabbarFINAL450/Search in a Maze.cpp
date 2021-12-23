//https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#

class Solution{
    public:
    void solve(vector<string>&res,string path,vector<vector<int>>m,int x,int y){
        int n = m.size();
        m[x][y] = 0;
        if(x==n-1&&y==n-1){
            res.push_back(path);
            return;
        }
        
        if(x+1<n&&m[x+1][y]==1){
            solve(res,path+"D",m,x+1,y);
        }
        if(y>0&&m[x][y-1]==1){
            solve(res,path+"L",m,x,y-1);
        }
        if(y+1<n&&m[x][y+1]==1){
            solve(res,path+"R",m,x,y+1);
        }
        if(x>0&&m[x-1][y]==1){
            solve(res,path+"U",m,x-1,y);
        }
        
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>res;
        string path = "";
        int x=0,y=0;
        if(m[0][0]==1&&m[n-1][n-1]==1){
            //m[0][0] = 0;
            solve(res,path,m,x,y);
        }
        return res;
    }
};
