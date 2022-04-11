//https://binarysearch.com/problems/Leftmost-Deepest-Tree-Node

void preorder(Tree* root,int ch,int&h,int &res){
    if(!root)
    return;

    if(ch>h){
        h = ch;
        res = root->val;
    }

    preorder(root->left,ch+1,h,res);
    preorder(root->right,ch+1,h,res);
}

int solve(Tree* root) {
    if(!root)
    return NULL;
    int res = root->val;
    int h = 0;
    preorder(root,0,h,res);
    return res;
}
