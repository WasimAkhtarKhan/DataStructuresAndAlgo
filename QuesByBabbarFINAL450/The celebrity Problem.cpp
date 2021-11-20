//https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1#

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int checkForC(vector<vector<int> >& M,int& a,int n){
        for(int i=0;i<n;i++)
        if(M[a][i]==1)
        return -1;
        
        int followers = 0;
        for(int i=0;i<n;i++)
        if(M[i][a]==1)
        followers++;
        
        if(followers==n-1)
        return a;
        
        return -1;
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        int a = 0;
        int b = n-1;
        for(a=0,b=n-1;a<n&&b>=0;){
            if(M[a][b]==1)
            a++;
            else
            b--;
        }
        return checkForC(M,a,n);
    }
};

//O(n*n) Not Optimised
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    bool checkCeleb(int k,vector<vector<int>>& M,int&n){
        for(int i=0;i<n;i++)
        if(M[k][i]!=0)
        return false;
        for(int i=0;i<n;i++){
            if(M[i][k]!=1&&i!=k)
            return false;
        }
        return true;
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        for(int i=0;i<n;i++){
            if(checkCeleb(i,M,n)){
                return i;
            }
        }
        return -1;
    }
};
