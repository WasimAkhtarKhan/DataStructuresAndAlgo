//https://binarysearch.com/problems/Level-Order-Binary-Tree-to-Linked-List

LLNode* solve(Tree* root) {
    LLNode* ans = new LLNode();
    LLNode* temp = new LLNode();
    temp = ans;
    queue<Tree*> q;
    q.push(root);

    while (!q.empty()) {
        Tree* p = q.front();
        LLNode* n = new LLNode(p->val);
        q.pop();
        temp->next=n;
        temp=temp->next;

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }
    return ans->next;
}
