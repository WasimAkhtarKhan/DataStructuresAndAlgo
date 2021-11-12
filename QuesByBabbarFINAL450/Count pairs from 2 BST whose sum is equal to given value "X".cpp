//https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1#

class Solution
{
public:
    void traverse(Node* root,vector<int>&v){
        if(!root)
        return;
        traverse(root->left,v);
        v.push_back(root->data);
        traverse(root->right,v);
    }
    
    int countPairs(Node* root1, Node* root2, int x)
    {
        vector<int>v1;
        vector<int>v2;
        traverse(root1,v1);
        traverse(root2,v2);
        int count=0;
        for(int i=0,j=v2.size()-1;i<v1.size()&&j>=0;){
            if(v1[i]+v2[j]==x)
            {
                count++;
                j--;
            }
            else if(v1[i]+v2[j]<x)
            i++;
            else
            j--;
        }
        return count;
    }
};
