//https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1#
//My solution
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    int checkPalin(int i,int j,string S)
    {
        int a=0; int n=(j-i+1)/2;
        while(n)
        {
            if(S[i+a]!=S[j-a])
            return 0;
            a++; n--;
        }
        return 1;
    }
  
    string longestPalin (string S) {
        // code here
        int left=0,right=0;
        for(int i=0;i<S.length()-1;i++)
            for(int j=i+1;j<S.length();j++)
            {
                int flag=checkPalin(i,j,S);
                if(flag)
                {
                    if( (j-i)-(right-left) > 0)
                    right=j; left=i;
                }
            }
        string answer;
        for(int a=left;a<=right;a++)
        answer.push_back(S[a]);
        
        if(answer.length())
        return answer;
        
        answer.push_back(S[0]);
        return answer;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
  // } Driver Code Ends
