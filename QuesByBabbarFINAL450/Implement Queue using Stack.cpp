//https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1#

void StackQueue :: push(int x)
{
    // Your Code
    while(s1.size()){
        int t = s1.top();
        s1.pop();
        s2.push(t);
    }
    s1.push(x);
    while(s2.size()){
        int t = s2.top();
        s2.pop();
        s1.push(t);
    }
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code
        if(s1.size()){
            int t = s1.top();
            s1.pop();
            return t;
        }
        return -1;
}
