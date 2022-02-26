//https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1#

vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        vector<int>v(2,0);
        sort(candies,candies+N);
        int count;
        if(N%(K+1)==0)
        count = N/(K+1);
        else
        count = N/(K+1)+1;
        for(int i=1;i<=count;i++){
            v[0] += candies[i-1];
            v[1] += candies[N-i];
        }
        return v;
    }
