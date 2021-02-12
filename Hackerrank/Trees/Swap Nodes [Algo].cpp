//https://www.hackerrank.com/challenges/swap-nodes-algo/problem


#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int id;
    Node*left,*right;
    Node(int i)
    {
        id=i;
    }
};

void inorder(Node*root)
{
    if(root==nullptr)
        return;
    inorder(root->left);
    cout<<root->id<<" ";
    inorder(root->right);
}


void rec(Node*R, int level, int j)
{
    if(R==nullptr)
        return;
    Node*tmp;
    if(level%j==0)
    {
        tmp=R->left;
        R->left=R->right;
        R->right=tmp;
    }
    rec(R->left,level+1,j);
    rec(R->right,level+1,j);
}

void swapNodes(vector<vector<int>> indexes, vector<int> queries)
{
    int l=indexes.size();
    Node**N=new Node*[l+1];
    for(int i=1;i<=l;i++)
    {
        N[i]=new Node(i);
    }
    for(int i=1;i<=l;i++)
    {
        if(indexes[i-1][0]==-1)
            N[i]->left=nullptr;
        else
            N[i]->left=N[indexes[i-1][0]];
        if(indexes[i-1][1]==-1)
            N[i]->right=nullptr;
        else
            N[i]->right=N[indexes[i-1][1]];
    }
    int t=queries.size();
    Node*tmp;
    
    vector<int>v;
    for(int i=0;i<t;i++)
    {
        rec(N[1],1,queries[i]);
        inorder(N[1]);
        cout<<endl;
    }
}

int main()
{   
    int ind;
    cin>>ind;
    int el;
    vector<vector<int>>indexes;
    vector<int>queries;
    vector<int>v;
    for(int i=0;i<ind;i++)
    {

        cin>>el;
        v.push_back(el);
        cin>>el;
        v.push_back(el);
        indexes.push_back(v);
        v.clear();
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>el;
        queries.push_back(el);
    }
    swapNodes(indexes,queries);
    return 0;
}
