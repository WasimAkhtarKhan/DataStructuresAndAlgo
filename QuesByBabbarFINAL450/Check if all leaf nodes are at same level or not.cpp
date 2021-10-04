//https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1#

class Solution{
  public:
    /*You are required to complete this method*/
    
    void traversal(Node* root,int h,int& height,int& flag) {
        if(!root||flag)
        return;
        
        if(root->left==NULL&&root->right==NULL){
        if(height==-1)
        height = h;
        else if(h!=height)
        flag=1;
        }
        
        traversal(root->left,h+1,height,flag);
        traversal(root->right,h+1,height,flag);
    }
    
    bool check(Node *root)
    {
        //Your code here
        int height = -1;
        int flag = 0;
        traversal(root,0,height,flag);
        if(flag==1)
        return 0;
        return 1;
    }
};
