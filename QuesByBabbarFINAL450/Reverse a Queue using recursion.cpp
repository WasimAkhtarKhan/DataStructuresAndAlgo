//https://practice.geeksforgeeks.org/problems/queue-reversal/1#

void reverseQue(queue<int>&q){
    if(q.size()==0)
    return;
    
    int t = q.front();
    q.pop();
    reverseQue(q);
    q.push(t);
}

queue<int> rev(queue<int> q)
{
    // add code here.
    reverseQue(q);
    return q;
}
