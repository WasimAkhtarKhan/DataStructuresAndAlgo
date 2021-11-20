//https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1

int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>s;
        for(int i=0;i<S.size();i++){
            if(S[i]=='*'){
                int r = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(r*b);
            }
            else if(S[i]=='/'){
                int r = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b/r);
            }
            else if(S[i]=='+'){
                int r = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(r+b);
            }
            else if(S[i]=='-'){
                int r = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b-r);
            }
            else
            s.push((S[i]-48));
        }
        return s.top();
    }
