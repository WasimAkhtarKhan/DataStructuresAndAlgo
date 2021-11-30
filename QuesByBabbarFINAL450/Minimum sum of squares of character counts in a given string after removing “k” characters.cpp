//https://practice.geeksforgeeks.org/problems/game-with-string4100/1#

int minValue(string s, int k){
        // code here
        unordered_map<char,int>um;
        for(int i=0;i<s.length();i++){
            um[s[i]]++;
        }
        priority_queue<int>pq;
        for(auto it = um.begin();it!=um.end();it++)
        pq.push(it->second);
        
        while(k--){
            int x = pq.top();
            pq.pop();
            x--;
            pq.push(x);
        }
        int res = 0;
        while(pq.size()){
            int x = pq.top();
            res += x*x;
            pq.pop();
        }
        return res;
    }
