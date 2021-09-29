//https://www.geeksforgeeks.org/construct-binary-tree-string-bracket-representation/

#include <iostream>
#include <stack>

using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

Node* bfs(string s) {
    string a=s.substr(0,1);
    int num = stoi(a);
    Node* ans = newNode(num);
    Node* curr = ans;

    std::stack<Node*> st;
    st.push(curr);
    
    for(int i=1;i<s.length();i++) {
        if(s[i]=='(')
        continue;
        else if(s[i]==')') {
            st.pop();
            curr=st.top();
        }
        else {
            string a = s.substr(i,1);
            int n = stoi(a);
            Node* t = newNode(n);
            if(!curr->left)
            curr->left=t;
            else
            curr->right=t;
            curr = t;
            st.push(t);
        }
    }
    return ans;
}

void traversal(Node* curr) {
    if(!curr)
    return ;
    
    cout<<curr->data<<" ";
    traversal(curr->left);
    traversal(curr->right);
}

int main() {
	string s="4(2(3)(1))(6(5))";
	Node* ans=bfs(s);
	traversal(ans);
	return 0;
}
