//https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1#

Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   while(root){
       if(root->data<n1&&root->data<n2)
       root = root->right;
       else if(root->data>n1&&root->data>n2)
       root = root->left;
       else
       return root;
   }
}
