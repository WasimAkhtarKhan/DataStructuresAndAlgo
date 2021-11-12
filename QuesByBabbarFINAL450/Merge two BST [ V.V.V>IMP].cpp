//https://www.geeksforgeeks.org/merge-two-balanced-binary-search-trees/

void traverse(node* root,vector<int>&v){
    if(!root)
    return;
    traverse(root->left,v);
    v.push_back(root->data);
    traverse(root->right,v);
}

node* makeTree(vector<int>&v,int s,int e){
    if(s>e)
    return NULL;
    int mid = (s+e)/2;
    node* r = newNode(v[mid]);
    r->left = makeTree(v,s,mid-1);
    r->right = makeTree(v,mid+1,e);
    return r;
}

node* mergeTrees(node *root1, node *root2, int m, int n)
{
    vector<int>v;
    traverse(root1,v);
    traverse(root2,v);
    sort(v.begin(),v.end());//This sorting can be optimized by using in-place sorting
    
    int s = 0;
    int e = v.size()-1;
    node* ans = makeTree(v,s,e);//This can be optimized by using "In-place conversion of Sorted DLL to Balanced BST"
    return ans;
}
