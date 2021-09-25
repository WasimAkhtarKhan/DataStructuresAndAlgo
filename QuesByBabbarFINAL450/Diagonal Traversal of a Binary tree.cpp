//https://www.interviewbit.com/problems/diagonal-traversal/

vector<int> Solution::solve(TreeNode* A) {
    vector<int>v;
    if(A==NULL)
    return v;
    queue<TreeNode*>q;

    TreeNode *curr=A;
    while(curr) {
        v.push_back(curr->val);
        if(curr->left)
        q.push(curr->left);
        curr=curr->right;
        if(curr==NULL&&q.size())
        {
            curr=q.front();
            q.pop();
        }
    }
    return v;
}
