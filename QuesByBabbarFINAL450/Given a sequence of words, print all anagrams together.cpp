//https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#
//My solution
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<string>t=string_list;
        for(int i=0;i<t.size();i++)
        sort(t[i].begin(),t[i].end());

        vector<vector<string>>ans;
        
        vector<string>v;
        vector<string>r;
        for(int i=0;i<t.size();i++)
        {
            if(std::find(v.begin(),v.end(),t[i])==v.end())
            {
                v.push_back(t[i]);
                for(int j=i;j<t.size();j++)
                {
                    if(t[i]==t[j])
                    r.push_back(string_list[j]);
                }
                ans.push_back(r);
                r.clear();
            }
        }
        return ans;
    }
};
