//https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/

//Method 2: above link
#include <iostream>
using namespace std;

int loopCheck(int p2,int n,string s1,string s2)
{
    int l=n-1;
    int p1=0;
    while(l)
    {
        p1++; p2++;
        if(s1[p1%n]!=s2[p2%n])
        return l;
        l--;
    }
    return l;
}

int main() {
	string s1="Thisisstring";
	string s2="stringThisis";
	
	if(s1.length()!=s2.length())
	{
	    cout<<"Not Equal";
	    return 0;
	}
	
	int n=s1.length();
	for(int i=0;i<n;i++)
	{
	    if(s1[0]==s2[i])
	    {
	        int l=loopCheck(i,n,s1,s2);
	        if(l==0)
	        {
	            printf("Strings are rotations of each other");
	            return 1;//True
	        }
	    }
	}
	printf("Strings are not rotations of each other");
	return 0;//False
}
