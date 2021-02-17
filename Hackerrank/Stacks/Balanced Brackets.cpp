//https://www.hackerrank.com/challenges/balanced-brackets/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
int top=-1;
int stack[1000];
int zoo=s.size();
for(int i=0;i<zoo;i++)
{
    if(s[i]=='{'||s[i]=='['||s[i]=='(')
    {
        top++;
        stack[top]=s[i];
    }
    else
    {
        if(s[i]=='}')
        {
            if(stack[top]=='{')
            top--;
            else 
            return "NO";
        }
        else if(s[i]==')')
        {
            if(stack[top]=='(')
            top--;
            else 
            return "NO";
        }
        else if(s[i]==']')
        {
            if(stack[top]=='[')
            top--;
            else 
            return "NO";
        }

    }
}
if(top==-1)
return "YES";
else
return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
