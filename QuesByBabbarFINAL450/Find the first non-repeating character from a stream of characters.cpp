//https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1#

class Solution {
	public:
	    void rem(deque<char>& q,char a){
	        deque <char> :: iterator it;
	        for(it=q.begin();it!=q.end();it++){
	            if(*it==a){
	                while(it!=q.end()){
	                    *it = *(it+1);
	                    it++;
	                }
	                q.pop_back();
	                return;
	            }
	        }
	    }
	    
		string FirstNonRepeating(string A){
		    // Code here
		    int arr[26] = {0};
		    deque<char>q;
		    for(int i=0;i<A.length();i++){
		        if(arr[int(A[i])-97]==0){
		            arr[int(A[i]-97)]=1;
		            q.push_front(A[i]);
		            A[i] = q.back();
		        }
		        else{
		            rem(q,A[i]);
		            if(!q.empty())
		            A[i] = q.back();
		            else
		            A[i] = '#';
		        }
		    }
		    return A;
		}
};


//Other Solu

class Solution {
	public:
		string FirstNonRepeating(string A){
		    int n = A.size();
		    vector<int>f(26, 0);
		    vector<int>last(26, -1);
		    for(int i = 0; i < A.size(); i++){
		        if(last[A[i] - 'a'] == -1)
		            last[A[i] - 'a'] = i;
		    }
		    string ans="";
		    for(int i = 0; i < A.size(); i++){
		        f[A[i] - 'a']++;
		        char ch = '#';
		        int x = A.size() + 1;
		        for(int j = 0; j < 26; j++){
		            if(f[j] == 1 and x > last[j]){
		                ch = char(j + 'a');
		                x = last[j];
		            }
		        }
		        ans += ch;
		    }
		    return ans;
		}

};
