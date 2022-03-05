//https://practice.geeksforgeeks.org/contest/coding-try-outs-amazon/problems
//Rearrange characters in a string such that no two adjacent are same
//https://practice.geeksforgeeks.org/problems/rearrange-characters/0

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:

	int rearrange(string str)
	    {
		int lar=0;
		unordered_map<char,int>m;
		for(int i=0;i<str.length();i++){
		    m[str[i]]++;
		    lar = max(lar,m[str[i]]);
		}

		int sum=str.size();

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
