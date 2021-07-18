//https://leetcode.com/contest/weekly-contest-250/problems/add-minimum-number-of-rungs/

class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int count=0;
        int position=0;
        int i=0;
        while(position<rungs[rungs.size()-1])
        {
            if(position+dist<rungs[i])
            {
                if((rungs[i]-position)%dist==0)
                    count--;
                count = count + (rungs[i]-position)/dist;
                position = position = rungs[i];
            }
            else
            {
                position = rungs[i];
                i++;
            }
        }
        return count;
    }
};
