//https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

//Efficient Solution
class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node * lca(Node* root,int n1,int n2)
    {
    
      if(root==NULL)
        return NULL;
    
      //if either n1 or n2 matches with data at current node, we return root.
      // (Note that if a node is ancestor of other, then the ancestor node
      //becomes the lowest common ancestor).
      if(root->data==n1 or root->data==n2)
        return root;
        
      //calling the lca function recursively for left and right subtrees.
      Node *l = lca(root->left,n1,n2);
      Node *r = lca(root->right,n1,n2);
      
      //if both of the above calls return non-NULL value then one node
      //is present in one subtree and other is present in another subtree. 
      //So, this node is the lowest common ancestor.
      if (l and r)
        return root;
    
      //else we check if left subtree or right subtree is the
      //lowest common ancestor.
      return (l!=NULL)?l:r;
    }
};

//My solution
class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    int flag=0;
    void traverse(vector<int>& s,Node* root,int n){
        if(!root)
        return;
        
        if(flag==0)
        s.push_back(root->data);
        if(root->data==n)
        {
            flag=1;
            return;
        }
    
        
        traverse(s,root->left,n);
        traverse(s,root->right,n);
        
        if(s.size()&&flag==0)
        s.pop_back();
    }
    
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       vector<int>s1;
       vector<int>s2;
       traverse(s1,root,n1);
       flag=0;
       traverse(s2,root,n2);
       
       Node* ans = new Node;
       ans->data = -1;
       
       for(int i=s1.size()-1;i>=0;i--){
           //cout<<"s1="<<s1[i]<<" ";
           for(int j=s2.size()-1;j>=0;j--){
               //cout<<"s2="<<s2[j]<<" ";
               if(s1[i]==s2[j])
               {
                   ans->data = s1[i];
                   return ans;
               }
           }
       }
       return ans;
    }
};
