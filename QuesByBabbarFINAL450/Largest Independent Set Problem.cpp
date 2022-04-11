//https://practice.geeksforgeeks.org/problems/largest-independent-set-problem/1#
//https://www.geeksforgeeks.org/largest-independent-set-problem-dp-26/

//DP Solution
int LISS(node *root)
{
    if (root == NULL)
        return 0;
 
    if (root->liss)
        return root->liss;
 
    if (root->left == NULL && root->right == NULL)
        return (root->liss = 1);
 
    // Calculate size excluding the current node
    int liss_excl = LISS(root->left) + LISS(root->right);
 
    // Calculate size including the current node
    int liss_incl = 1;
    if (root->left)
        liss_incl += LISS(root->left->left) + LISS(root->left->right);
    if (root->right)
        liss_incl += LISS(root->right->left) + LISS(root->right->right);
 
    // Maximum of two sizes is LISS, store it for future uses.
    root->liss = max(liss_incl, liss_excl);
 
    return root->liss;
}
 
// A utility function to create a node
node* newNode(int data)
{
    node* temp = new node();
    temp->data = data;
    temp->left = temp->right = NULL;
    temp->liss = 0;
    return temp;
}

//Recursive Solution
int LISS(Node *root)
{
    //Code here
    if(!root) return 0;
    int a=0,b=0;
    if(root->left)
    a = LISS(root->left->right)+LISS(root->left->left);
    if(root->right)
    b = LISS(root->right->right)+LISS(root->right->left);
    
    return max(1+a+b,LISS(root->left)+LISS(root->right));
}
