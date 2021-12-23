//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1#

//Using DFS
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isVerCyc(int i,vector<int>&vis,vector<int>adj[],int par){
        vis[i] = true;
        bool r2 = false;
        for(auto x : adj[i]){
            if(vis[x]==false&&r2==false){
                r2 = isVerCyc(x,vis,adj,i);
            }
            else if(par!=x)
            return true;
        }
        return r2;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        bool res = false;
        for(int i=0;i<V;i++){
            int par = -1;
            if(vis[i]==0&&res==false){
                res = isVerCyc(i,vis,adj,par);
            }
        }
        return res;
    }
};

//Using BFS
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isVerCyc(int i,vector<int>&vis,vector<int>adj[],int& V){
        vis[i] = true;
        vector<int>par(V,-1);
        queue<int>q;
        q.push(i);
        while(q.size()){
            int t = q.front();
            q.pop();
            for(auto x : adj[t]){
                if(vis[x] == false){
                    vis[x] = true;
                    q.push(x);
                    par[x] = t;
                }
                else if(par[t]!=x)
                return true;
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        bool res = false;
        
        for(int i=0;i<V;i++){
            if(vis[i]==false&&res==false)
            res = isVerCyc(i,vis,adj,V);
        }
        return res;
    }
};
