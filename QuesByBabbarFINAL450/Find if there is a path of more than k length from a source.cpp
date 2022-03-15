//https://www.geeksforgeeks.org/find-if-there-is-a-path-of-more-than-k-length-from-a-source/
//https://practice.geeksforgeeks.org/problems/path-of-greater-than-equal-to-k-length1034/1#

bool util(int v,vector<vector<pair<int,int>>>&adj,vector<int>vis,int k){
        if(k<=0)
        return true;
        
        for(int i=0;i<adj[v].size();i++){
            int t = adj[v][i].first;
            int w = adj[v][i].second;
            
            if(vis[t]==0){
                if(w>=k)
                return true;
                
                vis[t] = 1;
                if(util(t,adj,vis,k-w))
                return true;
                vis[t] = 0;
            }
        }
        return false;
    }

    bool pathMoreThanK(int V, int E, int k, int *a) 
    { 
       //  Code Here
       vector<vector<pair<int,int>>>adj;
       //adj.clear();
       adj.resize(V+1);
       for(int i=0;i<3*E;i+=3){
           int u = a[i];
           int v = a[i+1];
           int w = a[i+2];
           
           adj[u].push_back(make_pair(v,w));
           adj[v].push_back(make_pair(u,w));
       }
       vector<int>vis(V,0);
       vis[0] = 1;
       return util(0,adj,vis,k);
    }
