//https://practice.geeksforgeeks.org/problems/page-faults-in-lru5603/1#

int pageFaults(int N, int C, int pages[]){
        // code here
        vector<int>v;
        int res = 0;
        for(int i=0;i<N;i++){
            auto it = find(v.begin(),v.end(),pages[i]);
            if(it==v.end()){
                if(v.size()==C)
                    v.erase(v.begin());
                    
                v.push_back(pages[i]);
                res++;
            }
            else{
                v.erase(it);
                v.push_back(pages[i]);
            }
        }
        return res;
    }
