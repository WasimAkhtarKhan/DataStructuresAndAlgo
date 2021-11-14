//https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1#

void letsRock(Node* curr,int mn,int mx,bool& ans){
    if(!curr)
    return;
    if(mx-mn<=2){
        ans = true;
        return;
    }
    letsRock(curr->left,mn,curr->data,ans);
    letsRock(curr->right,curr->data,mx,ans);
}
bool isDeadEnd(Node *root)
{
    //Your code here
    bool ans = false;
    int mn = 0;
    int mx = INT_MAX;
    letsRock(root,mn,mx,ans);
    return ans;
}
