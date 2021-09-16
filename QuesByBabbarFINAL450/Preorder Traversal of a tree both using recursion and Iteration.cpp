//https://www.techiedelight.com/preorder-tree-traversal-iterative-recursive/
//https://leetcode.com/problems/binary-tree-preorder-traversal/

//Recursive Solution
class Solution {
public:
    void Traversal(TreeNode* root,vector<int>& v)
    {
        if(!root)
            return;
        v.push_back(root->val);
        Traversal(root->left,v);
        Traversal(root->right,v);
    }
        
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        Traversal(root,v);
        return v;
    }
};

//Iterative solution
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>s;
        
        while(root||s.size())
        {
            while(root)
            {
                v.push_back(root->val);
                if(root->right)
                s.push(root->right);
                root=root->left;
            }
            if(s.size())
            root=s.top();
            else
            break;
            s.pop();
        }
        return v;
    }
};
