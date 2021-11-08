//https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1#

Node* insert(Node* root, int key) {
    // Your code here
    Node* ans = root;
    while(root){
        if(root->data==key)
        return ans;
        else if(root->data>key){
            if(root->left)
            root = root->left;
            else{
                root->left = new Node(key);
                return ans;
            }
        }
        else{
            if(root->right)
            root = root->right;
            else{
                root->right = new Node(key);
                return ans;
            }
        }
    }
}
