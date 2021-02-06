//https://leetcode.com/problems/count-number-of-teams/


class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count=0;
        for(int p2=1;p2<rating.size()-1;p2++)
        {
            int lg=0,rg=0,ls=0,rs=0;
            for(int p1=0;p1<p2;p1++)
            {
                if(rating[p2]>rating[p1])
                {
                    ls++;
                }
                else
                    lg++;
            }
            for(int p3=p2+1;p3<rating.size();p3++)
            {
                if(rating[p3]>rating[p2])
                {
                    rg++;
                }
                else
                    rs++;
            }
            count = count + ls*rg + lg*rs;
        }
        return count;
    }
};
