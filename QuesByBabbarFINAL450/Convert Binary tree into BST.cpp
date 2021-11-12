//https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1#

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void traversal(Node* root,vector<int>&v){
        if(!root)
        return;
        
        traversal(root->left,v);
        v.push_back(root->data);
        traversal(root->right,v);
    }
    
    void putBack(Node* root,vector<int>&v,int& i){
        if(!root)
        return;
        
        putBack(root->left,v,i);
        root->data = v[i++];
        putBack(root->right,v,i);
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        Node* c = root;
        vector<int>v;
        traversal(root,v);
        sort(v.begin(),v.end());
        int i=0;
        putBack(c,v,i);
        return root;
    }
};
