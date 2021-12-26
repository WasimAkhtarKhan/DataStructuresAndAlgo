//https://leetcode.com/problems/number-of-operations-to-make-network-connected/

//My Solution
class Solution {
public:
    void DFS(unordered_map<int,vector<int>>&umap,int a,vector<bool>&vis){
        vis[a] = true;
        
        for(int i=0;i<umap[a].size();i++){
            if(vis[umap[a][i]]==false)
            DFS(umap,umap[a][i],vis);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n-1>connections.size())
            return -1;
        
        unordered_map<int,vector<int>>umap;
        for(int i=0;i<connections.size();i++){
            int u = connections[i][0];
            int v = connections[i][1];
            umap[u].push_back(v);
            umap[v].push_back(u);
        }
        
        vector<bool>vis(n,false);
        
        int clusters = 0;
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                clusters++;
                DFS(umap,i,vis);
            }
        }
        return clusters-1;   
    }
};
