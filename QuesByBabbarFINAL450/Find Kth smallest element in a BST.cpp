https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1#
//There is a better solution than this. Try it in Space: O(1)
//Space:O(n)
class Solution {
  public:
    // Return the Kth smallest element in the given BST
    void traverse(Node* root,int&i,int K,int& ans){
        if(!root)
        return;
        
        traverse(root->left,i,K,ans);
        i++;
        if(i==K){
            ans = root->data;
            return;
        }
        traverse(root->right,i,K,ans);
    }
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        int j=0;
        int ans = -1;
        traverse(root,j,K,ans);
        return ans;
    }
};
