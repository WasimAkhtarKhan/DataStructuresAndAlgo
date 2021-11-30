//https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1#

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    vector<long long int>res;
    queue<long long int>q;
    
    long long int i=0;
    for(i=0;i<K;i++){
        if(A[i]<0)
        q.push(A[i]);
    }
    if(q.size())
    res.push_back(q.front());
    else
    res.push_back(0);
    
    for(i=K;i<N;i++){
        if(q.size()&&A[i-K]==q.front())
        q.pop();
        if(A[i]<0)
        q.push(A[i]);
        
        if(q.size())
        res.push_back(q.front());
        else
        res.push_back(0);
    }
    return res;
 }
