//https://leetcode.com/problems/count-and-say/

class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        if(n==1)
            return ans;
        
        int i=2;
        while(i<=n)
        {
            string temp="";
            int count=1;
            for(int j=1;j<ans.length();j++)
            {
                if(ans[j]==ans[j-1])
                count++;
                else
                {
                    temp += to_string(count);
                    temp += ans[j-1];
                    count=1;
                }
            }
            temp += to_string(count);
            temp += ans[ans.length()-1];
            ans=temp;
            i++;
        }
        return ans;
    }
};
