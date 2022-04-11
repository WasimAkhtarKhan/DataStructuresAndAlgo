//https://binarysearch.com/problems/Sum-of-the-Deepest-Nodes

void traverse(Tree*root,int height,pair<int,int>&sum){
    if(!root)
    return;

    if(height==sum.first){
        sum.second += root->val;
    }

    if(height>sum.first){
        sum.first = height;
        sum.second = root->val;
    }

    traverse(root->left,height+1,sum);
    traverse(root->right,height+1,sum);
}

int solve(Tree* root) {
    pair<int,int>sum;
    sum.first = 0;
    sum.second = 0;
    traverse(root,0,sum);
    return sum.second;
}
