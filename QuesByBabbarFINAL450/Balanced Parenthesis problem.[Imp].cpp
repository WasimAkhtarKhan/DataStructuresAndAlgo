//https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        int n=x.length();
        for(int i=0;i<n;i++)
        {
            if(x[i]=='{'||x[i]=='('||x[i]=='[')
            s.push(x[i]);
            else if(s.size()!=0&&s.top()=='{'&&x[i]=='}')
            s.pop();
            else if(s.size()!=0&&s.top()=='('&&x[i]==')')
            s.pop();
            else if(s.size()!=0&&s.top()=='['&&x[i]==']')
            s.pop();
            else
            return false;
        }
        if(s.size()==0)
        return true;
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
