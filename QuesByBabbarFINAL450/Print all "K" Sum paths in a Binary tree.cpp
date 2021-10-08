//https://www.geeksforgeeks.org/print-k-sum-paths-binary-tree/

// C++ program to print all paths with sum k.
#include <bits/stdc++.h>
using namespace std;

// binary tree node
struct Node {
	int data;
	Node *left, *right;
	Node(int x)
	{
		data = x;
		left = right = NULL;
	}
};

void printVector(const vector<int>& v, int i)
{
    for (int j = i; j < v.size(); j++)
        cout << v[j] << " ";
    cout << endl;
}

void traverse(Node* root,vector<int>v,int k){
    if(!root)
    return;
    
    v.push_back(root->data);
    
    traverse(root->left,v,k);
    traverse(root->right,v,k);
    
    int f = 0;
    for (int j = v.size() - 1; j >= 0; j--) {
        f += v[j];
 
        // If path sum is k, print the path
        if (f == k)
            printVector(v, j);
    }
    v.pop_back();
}

void printKPath(Node* root, int k)
{
    std::vector<int> v;
    traverse(root,v,k);
}

// Driver code
int main()
{
	Node* root = new Node(6);
	root->left = new Node(3);
	root->left->left = new Node(2);
	root->left->right = new Node(1);
	root->left->right->left = new Node(1);
	root->right = new Node(-1);
	root->right->left = new Node(4);
	root->right->left->left = new Node(1);
	root->right->left->right = new Node(2);
	root->right->right = new Node(5);
	root->right->right->right = new Node(2);

	int k = 1;
	printKPath(root, k);

	return 0;
}
