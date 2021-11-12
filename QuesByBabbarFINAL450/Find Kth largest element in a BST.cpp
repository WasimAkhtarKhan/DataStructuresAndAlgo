//https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1#

class Solution
{
    public:
    
    void traverse(Node* root,int& i,int&ans,int K){
        if(!root)
        return;
        traverse(root->right,i,ans,K);
        i++;
        if(i==K){
            ans = root->data;
            return;    
        }
        traverse(root->left,i,ans,K);
    }
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int ans = 0;
        int j=0;
        traverse(root,j,ans,K);
        return ans;
    }
};
