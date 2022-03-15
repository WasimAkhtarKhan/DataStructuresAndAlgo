//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1#

void perm_util(int index,string&S,vector<string>&res,string curr,vector<bool>vis){
	        if(index==S.size()){
	            res.push_back(curr);
	            return;
	        }
	        
	        for(int i=0;i<S.size();i++){
	            if(vis[i]==false){
	                curr.push_back(S[i]);
	                vis[i] = true;
	                perm_util(index+1,S,res,curr,vis);
	                curr.pop_back();
	                vis[i] = false;
	            }
	        }
	    }
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    sort(S.begin(),S.end());
		    vector<string>res;
		    string curr;
		    vector<bool>vis(S.size(),false);
		    perm_util(0,S,res,curr,vis);
		    return res;
		}
