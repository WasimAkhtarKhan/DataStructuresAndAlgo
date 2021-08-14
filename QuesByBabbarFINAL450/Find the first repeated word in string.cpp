//https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1#

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int>m;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        
        string last="";
        int f1=INT_MIN;
        string secLast="";
        int f2=INT_MIN;
        
        unordered_map<string,int>::iterator it;
        
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>f1)
            {
                secLast=last;
                f2=f1;
                last=it->first;
                f1=it->second;
            }
            else if(it->second>f2 && it->second!=f1)
            {
                secLast=it->first;
                f2=it->second;
            }
        }
        return secLast;
    }
};
