//https://practice.geeksforgeeks.org/problems/prerequisite-tasks/0/?company[]=Twitter&page=1&query=company[]Twitterpage1#
//https://www.geeksforgeeks.org/find-whether-it-is-possible-to-finish-all-tasks-or-not-from-given-dependencies/

//Using BFS
bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<int>arr[N];
	    int P = prerequisites.size();
	    
	    for(int i=0;i<P;i++){
	        arr[prerequisites[i].second].push_back(prerequisites[i].first);
	    }
	    vector<int>inDeg(N,0);
	    
	    for(int i=0;i<P;i++){
	        inDeg[prerequisites[i].first]++;
	    }
	    
	    int count = 0;
	    queue<int>q;
	    for(int i=0;i<N;i++){
	        if(inDeg[i]==0){
	            q.push(i);
	        }
	    }
	    
	    while(q.size()){
	        int t = q.front();
	        q.pop();
	        count++;
	        
	        for(int i=0;i<arr[t].size();i++){
	            int v = arr[t][i];
	            inDeg[v]--;
	            if(inDeg[v]==0)
	            q.push(v);
	        }
	    }
	    if(count==N)
	    return true;
	    return false;
	}
