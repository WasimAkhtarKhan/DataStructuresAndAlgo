//https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#

bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        for(int i=0;i<x.size();i++){
            if(x[i]==']'||x[i]==')'||x[i]=='}'){
                if(s.size()==0)
                return false;
                if(s.top()=='['&&x[i]==']')
                s.pop();
                else if(s.top()=='('&&x[i]==')')
                s.pop();
                else if(s.top()=='{'&&x[i]=='}')
                s.pop();
                else
                return false;
            }
            else
            s.push(x[i]);
        }
        if(s.size()==0)
        return true;
        return false;
    }
