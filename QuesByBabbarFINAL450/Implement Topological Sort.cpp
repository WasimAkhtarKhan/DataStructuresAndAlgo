//https://practice.geeksforgeeks.org/problems/topological-sort/1

vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>inDeg(V,0);
	    for(int i=0;i<V;i++){
	        for(int x: adj[i]){
	            inDeg[x]++;
	        }
	    }
	    vector<int>res;
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        if(inDeg[i]==0)
	        q.push(i);
	    }
	    while(!q.empty()){
	        int t = q.front();
	        q.pop();
	        res.push_back(t);
	        for(int x: adj[t]){
	            inDeg[x]--;
	            if(inDeg[x]==0)
	            q.push(x);
	        }
	    }
	    return res;
	}
