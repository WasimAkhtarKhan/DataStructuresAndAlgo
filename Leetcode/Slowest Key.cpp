//https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/636/week-1-september-1st-september-7th/3965/

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ans = keysPressed[0];
        int lar=releaseTimes[0];
        for(int i=1;i<keysPressed.size();i++)
        {
            int d=releaseTimes[i]-releaseTimes[i-1];
            if(d>lar)
            {
                ans=keysPressed[i];
                lar=d;
            }
            else if(d==lar&&(int(ans)<=int(keysPressed[i])))
                ans=keysPressed[i];
        }
        return ans;
    }
};
