//https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#
//https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int ind,vector<int>&res,vector<int>& vis,vector<int>adj[]){
        vis[ind] = 1;
        res.push_back(ind);
        
        for(auto a: adj[ind]){
            if(vis[a]==0)
            dfs(a,res,vis,adj);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>res;
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                dfs(i,res,vis,adj);
            }
        }
        return res;
    }
};
