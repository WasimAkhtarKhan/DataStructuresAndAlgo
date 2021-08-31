//https://www.geeksforgeeks.org/function-to-find-number-of-customers-who-could-not-get-a-computer/

//My Solution and Try again without map
// C++ program to find number of customers who couldn't get a resource.
#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

#define MAX_CHAR 26

// n is number of computers in cafe.
// 'seq' is given sequence of customer entry, exit events
int runCustomerSimulation(int n, const char *seq)
{
    int vacant=n;
    int ans=0;
    unordered_map<char,int>m;
    for(int i=0;i<strlen(seq);i++)
    {
        if(m[seq[i]]==0&&vacant)
        {
            m[seq[i]]++;
            vacant--;
        }
        else if(m[seq[i]]==1)
        {
            m[seq[i]]--;
            vacant++;
        }
        else if(m[seq[i]]==0&&vacant==0)
            m[seq[i]]=-1;
        else if(m[seq[i]]==-1&&vacant==0)
            ans++;
    }
    return ans;
}

// Driver program
int main()
{
	cout << runCustomerSimulation(2, "ABBAJJKZKZ") << endl;
	cout << runCustomerSimulation(3, "GACCBDDBAGEE") << endl;
	cout << runCustomerSimulation(3, "GACCBGDDBAEE") << endl;
	cout << runCustomerSimulation(1, "ABCBCA") << endl;
	cout << runCustomerSimulation(1, "ABCBCADEED") << endl;
	return 0;
}
