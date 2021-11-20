//https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

char* reverse(char *S, int len)
{
    //code here
    stack<char>s;
    for(int i=0;i<len;i++){
        s.push(S[i]);
    }
    
    for(int i=0;i<len;i++){
        char top = s.top();
        s.pop();
        S[i] = top;
    }
    return S;
}
