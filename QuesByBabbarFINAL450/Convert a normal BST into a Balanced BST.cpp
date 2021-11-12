//https://leetcode.com/problems/balance-a-binary-search-tree/

class Solution {
public:
    void traversal(vector<int>&v,TreeNode* root){
        if(!root)
            return;
        traversal(v,root->left);
        v.push_back(root->val);
        traversal(v,root->right);
    }
    
    TreeNode* makeTree(vector<int>&v,int i,int j){
        if(i>j)
            return NULL;
        int mid  = (j+i)/2;
        TreeNode* r = new TreeNode(v[mid]);
        r->left = makeTree(v,i,mid-1);
        r->right = makeTree(v,mid+1,j);
        
        return r;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        if(!root)
            return NULL;
        vector<int>v;
        traversal(v,root);
        int  i = 0;
        TreeNode* ans = makeTree(v,i,v.size()-1);
        return ans;
    }
};
