//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>vis(V,false);
        vector<int>res;
        res.push_back(0);
        int s = 0;
        vis[s] = true;
        
        queue<int>q;
        q.push(0);
        while(q.size()){
            int t = q.front();
            q.pop();
            
            for(a : adj[t]){
                if(vis[a]==false){
                    vis[a] = true;
                    res.push_back(a);
                    q.push(a);
                }
            }
        }
        return res;
    }
};
