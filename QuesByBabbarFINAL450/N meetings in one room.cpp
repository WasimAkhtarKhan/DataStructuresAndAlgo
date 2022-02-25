//https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#

int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        v.push_back({end[i],start[i]});
        sort(v.begin(),v.end());
        int res = 1;
        int p = 0;
        for(int i=1;i<n;i++)
        if(v[i][1]>v[p][0]){
            res++;
            p=i;
        }
        return res;
    }
