//https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

void traverse(Node* root,int& mh,int h,int sum,int& ans) {
        if(!root)
        return;
        
        sum += root->data;
        if(h>=mh) {
            mh=h;
            ans=max(ans,sum);
        }
        
        traverse(root->left,mh,h+1,sum,ans);
        traverse(root->right,mh,h+1,sum,ans);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int sum=0;
        int ans=0;
        int mh=0;
        traverse(root,mh,0,sum,ans);
        return ans;
    }
