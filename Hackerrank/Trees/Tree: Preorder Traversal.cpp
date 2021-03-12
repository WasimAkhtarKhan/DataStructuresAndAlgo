//https://www.hackerrank.com/challenges/tree-preorder-traversal/problem


    void preOrder(Node *root) {

        if(root!=NULL)
        {
            printf("%d ",root->data);
            preOrder(root->left);
            preOrder(root->right);
        }

    }

