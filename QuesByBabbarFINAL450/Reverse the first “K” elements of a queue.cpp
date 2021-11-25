//https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1#

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int>s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    for(int i=0;i<k;i++){
        int t = s.top();
        q.push(t);
        s.pop();
    }
    int n = q.size();
    for(int i=0;i<n-k;i++){
        int t = q.front();
        q.pop();
        q.push(t);
    }
    return q;
}
