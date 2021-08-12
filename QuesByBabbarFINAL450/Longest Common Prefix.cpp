//https://leetcode.com/problems/longest-common-prefix/
//My solution
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++)
        {
            int j=0;
            for(j=0;j<strs.size()-1;j++)
                if(strs[j][i]!=strs[j+1][i])
                    break;
            if(j==strs.size()-1)
                ans += strs[0][i];
            else
                break;
        }
        return ans;
    }
};
