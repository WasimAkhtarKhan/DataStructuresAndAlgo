//https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#

long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long,vector<long long>,greater<long long>>pq(arr,arr+n);
        long long res = 0;
        while(pq.size()>1){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            pq.push(a+b);
            res += a+b;
        }
        return res;
    }
