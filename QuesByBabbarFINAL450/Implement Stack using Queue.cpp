//https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1#

void QueueStack :: push(int x)
{
        // Your Code
        while(q1.size()){
            int t = q1.front();
            q1.pop();
            q2.push(t);
        }
        q1.push(x);
        while(q2.size()){
            int t = q2.front();
            q2.pop();
            q1.push(t);
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code 
        if(q1.size()==0)
        return -1;
        
        int t = q1.front();
        q1.pop();
        return t;
}
