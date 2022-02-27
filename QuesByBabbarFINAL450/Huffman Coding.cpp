//https://practice.geeksforgeeks.org/problems/huffman-encoding3345/1#

struct node{
	  char data;
	  unsigned freq;
	  node *left;
	  node *right;
	  
	  node(char data,unsigned f){
	      this->data = data;
	      this->freq = f;
	      left=right=NULL;
	  }
};

struct compare{
	   bool operator()(node* a,node* b){
	        return a->freq>b->freq;
	   }
};

class Solution
{
	public:
	    void preorder(node* root,vector<string>&res,string s){
		    if(!root)
		    return;
		    
		    preorder(root->left,res,s+"0");
		    if(root->data!='$')
		    res.push_back(s);
		    preorder(root->right,res,s+"1");
		}
	    
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    struct node *l, *r, *t;
		    priority_queue<node*,vector<node*>,compare>pq;
		    
		    for(int i=0;i<N;i++){
		        pq.push(new node(S[i],f[i]));
		    }
		    
		    while(pq.size()!=1){
		        
		        l = pq.top();
		        pq.pop();
		        r = pq.top();
		        pq.pop();
		        
		        t = new node('$',l->freq+r->freq);
		        t->left = l;
		        t->right = r;
		        
		        pq.push(t);
		    }
		    
		    vector<string>res;
		    string s="";
		    preorder(pq.top(),res,s);
		    
		    return res;
		}
};
