//https://www.geeksforgeeks.org/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/

// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

int maxSubStr(string str, int n)
{
    int Zero = 0, One = 0;
    int count = 0;
  
    for (int i = 0; i < n; i++) {
        if (str[i] == '0') {
            Zero++;
        }
        else {
            One++;
        }
        if (Zero == One) {
            count++;
        }
    }
  
    if (count == 0)
        return -1;
 
    return cnt;
}
 
// Driver code
int main()
{
    string str = "0100110101";
    int n = str.length();
 
    cout << maxSubStr(str, n);
 
    return 0;
}
