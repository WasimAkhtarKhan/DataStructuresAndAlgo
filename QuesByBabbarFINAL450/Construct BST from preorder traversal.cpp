//https://www.geeksforgeeks.org/construct-bst-from-given-preorder-traversa/
//https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/

class Solution {
public:
    void makeTree(TreeNode*& root,vector<int>&v,int& i,TreeNode* prev){
        if(i==v.size())
            return;
        
        if(v[i]<root->val){
            root->left = new TreeNode(v[i]);
            i++;
            makeTree(root->left,v,i,root);
        }
        if(i==v.size())
            return;
        if(v[i]>root->val){
            if(prev==NULL){
                root->right = new TreeNode(v[i]);
                i++;
                makeTree(root->right,v,i,prev);
            }
            else if(prev&&v[i]<prev->val){
                root->right = new TreeNode(v[i]);
                i++;
                makeTree(root->right,v,i,prev);
            }
        }
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0)
            return NULL;
        TreeNode* ans = new TreeNode(preorder[0]);
        TreeNode* curr = ans;
        TreeNode* prev = NULL;
        int j=1;
        makeTree(curr,preorder,j,prev);
        return ans;
    }
};
