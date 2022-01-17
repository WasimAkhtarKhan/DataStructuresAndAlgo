//https://practice.geeksforgeeks.org/problems/bipartite-graph/1/#
//https://www.geeksforgeeks.org/bipartite-graph/

bool BFS(int& v,vector<int>&c,vector<int>adj[]){
        queue<int>q;
        c[v]=0;
        q.push(v);
        
        while(q.size()){
            int t = q.front();
            q.pop();
            
            for(auto a: adj[t]){
                if(c[a]==-1){
                    if(c[t]==1)
                    c[a]=0;
                    else
                    c[a]=1;
                    q.push(a);
                }
                else if(c[a]==c[t])
                return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int>c(V,-1);
	    
	    for(int i=0;i<V;i++){
	        if(c[i]==-1){
	            if(!BFS(i,c,adj))
	            return false;
	        }
	    }
	    return true;
	}
