//https://www.geeksforgeeks.org/find-median-bst-time-o1-space/

/* C++ program to find the median of BST in O(n)
time and O(1) space*/
#include<bits/stdc++.h>
using namespace std;

/* A binary search tree Node has data, pointer
to left child and a pointer to right child */
struct Node
{
	int data;
	struct Node* left, *right;
};

// A utility function to create a new BST node
struct Node *newNode(int item)
{
	struct Node *temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

/* A utility function to insert a new node with
given key in BST */
struct Node* insert(struct Node* node, int key)
{
	/* If the tree is empty, return a new node */
	if (node == NULL) return newNode(key);

	/* Otherwise, recur down the tree */
	if (key < node->data)
		node->left = insert(node->left, key);
	else if (key > node->data)
		node->right = insert(node->right, key);

	/* return the (unchanged) node pointer */
	return node;
}

/* Function to find median in O(n) time and O(1) space
using Morris Inorder traversal*/
int findMedian(struct Node *root)
{
    Node* f = root;
    while(f->left)
    f = f->left;
    int count = 0;
    Node* prev = NULL;
    Node* curr = root;

    while(curr){
        if(curr->left==NULL){
            count++;
            prev = curr;
            curr = curr->right;
        }
        else if(curr->left){
            Node* t = curr->left;
            while(t->right)
            t = t->right;
            t->right = curr;
            if(prev){
                prev->right = t;
                curr->left = NULL;
                curr = prev->right;
            }
            else{
                t = curr->left;
                curr->left = NULL;
                curr = t;
            }
        }
    }
    bool even = false;
    if(count%2==0){
        even = true;
    }
    if(even){
        count = count/2;
        while(--count)
        f = f->right;
        return (f->data + f->right->data)/2;
    }
    else{
        count = (count+1)/2;
        while(--count)
        f = f->right;
        return f->data;
    }
}

/* Driver program to test above functions*/
int main()
{

	/* Let us create following BST
				50
			/	 \
			30	 70
			/ \ / \
		20 40 60 80 */
	struct Node *root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);

	cout << "\nMedian of BST is "
		<< findMedian(root);
	return 0;
}
