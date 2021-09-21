//https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1#

class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    int m=0;
    void traversal(Node *root,vector<int>& v,int height)
    {
        if(root==NULL)
        return;
        if(height>m)
        {
            m=height;
            v.push_back(root->data);   
        }
        traversal(root->right,v,height+1);
        traversal(root->left,v,height+1);
    }
    
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>v;
       traversal(root,v,1);
       return v;
    }
};
