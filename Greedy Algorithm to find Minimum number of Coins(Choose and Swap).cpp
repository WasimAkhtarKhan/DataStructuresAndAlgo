//https://practice.geeksforgeeks.org/problems/choose-and-swap0531/1#

//My solution
string chooseandswap(string a){
        // Code Here
        unordered_set<int>s;
        int flag=0;
        for(int i=0;i<a.size()-1;i++){
            char x=a[i];
            for(int j=i+1;j<a.size();j++){
                if(a[j]<x&&s.find(a[j])==s.end())
                {
                    flag=1;
                    x = a[j];
                }
            }
            if(flag){
                char y = a[i];
                for(int k=i;k<a.size();k++){
                    if(a[k]==y)
                    a[k]=x;
                    else if(a[k]==x)
                    a[k]=y;
                }
                return a;
            }
            s.insert(a[i]);
        }
        return a;
    }

//More Optimal Solution

string smallestStr(string str, int n)
{
    int i, j;
    // To store the first index of
    // every character of str
    int chk[26];
    for (i = 0; i < 26; i++)
        chk[i] = -1;
  
    // Store the first occurring
    // index every character
    for (i = 0; i < n; i++) {
  
        // If current character is appearing
        // for the first time in str
        if (chk[str[i] - 'a'] == -1)
            chk[str[i] - 'a'] = i;
    }
  
    // Starting from the leftmost character
    for (i = 0; i < n; i++) {
  
        bool flag = false;
  
        // For every character smaller than str[i]
        for (j = 0; j < str[i] - 'a'; j++) {
  
            // If there is a character in str which is
            // smaller than str[i] and appears after it
            if (chk[j] > chk[str[i] - 'a']) {
                flag = true;
                break;
            }
        }
  
        // If the required character pair is found
        if (flag)
            break;
    }
  
    // If swapping is possible
    if (i < n) {
  
        // Characters to be swapped
        char ch1 = str[i];
        char ch2 = char(j + 'a');
  
        // For every character
        while(i < n) {
  
            // Replace every ch1 with ch2
            // and every ch2 with ch1
            if (str[i] == ch1)
                str[i] = ch2;
  
            else if (str[i] == ch2)
                str[i] = ch1;
          
          i++;
        }
    }
  
    return str;
}
