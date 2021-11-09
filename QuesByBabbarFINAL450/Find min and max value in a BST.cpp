//https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1

int minValue(Node* root) {
    // Code here
    int ans = INT_MAX;
    while(root){
        ans = min(ans,root->data);

        root=root->left;
    }
    return ans;
}
