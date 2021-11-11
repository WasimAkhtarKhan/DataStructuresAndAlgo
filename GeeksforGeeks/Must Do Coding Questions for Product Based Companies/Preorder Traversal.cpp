//https://practice.geeksforgeeks.org/problems/preorder-traversal/1#

void traversal(Node* root,vector<int>&v){
    if(!root)
    return;
    v.push_back(root->data);
    traversal(root->left,v);
    traversal(root->right,v);
}

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>v;
  traversal(root,v);
  return v;
}
