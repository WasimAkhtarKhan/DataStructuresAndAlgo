//https://practice.geeksforgeeks.org/contest/coding-try-outs-amazon/problems
//Rearrange characters in a string such that no two adjacent are same
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int rearrange(string str)
    {
        unordered_map<char,int>m;
        for(int i=0;i<str.length();i++)
        m[str[i]]++;
        
        int lar=0;
        int sum=0;
        unordered_map<char,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            sum += it->second;
            lar=max(lar,it->second);
        }
        if(sum-2*lar>=0)
        return 1;
        return 0;
    }
};

int main() {
	//code
	int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.rearrange(str) << endl;
    }
	return 0;
}
