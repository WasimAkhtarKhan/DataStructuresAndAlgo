//https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1#

void traverse(Node* root,int&l,int&h,int&count){
    if(!root)
    return;
    if(root->data>=l&&root->data<=h){
        count++;
        traverse(root->left,l,h,count);
        traverse(root->right,l,h,count);
    }
    else if(root->data<l)
    traverse(root->right,l,h,count);
    else if(root->data>h)
    traverse(root->left,l,h,count);
}

int getCount(Node *root, int l, int h)
{
  // your code goes here  
  int count = 0;
  traverse(root,l,h,count);
  return count;
}
