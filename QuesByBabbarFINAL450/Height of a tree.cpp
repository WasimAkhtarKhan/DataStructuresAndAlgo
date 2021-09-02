//https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1#

class Solution{
    public:
    //Function to find the height of a binary tree.
    int ans=0;
    
    void traverse(Node *node,int a)
    {
        if(!node)
        return;
        
        if(node->left)
        {
            ans=max(ans,a+1);
            traverse(node->left,a+1);
        }
        if(node->right)
        {
            ans=max(ans,a+1);
            traverse(node->right,a+1);
        }
    }
    
    int height(struct Node* node){
        // code here 
        traverse(node,0);
        return ans+1;
    }
};
