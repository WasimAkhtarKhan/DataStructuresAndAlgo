//https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1#

class Solution {
  public:
  
    int val(char a)
    {
        if(a=='I')
            return 1;
            else if(a=='V')
            return 5;
            else if(a=='X')
            return 10;
            else if(a=='L')
            return 50;
            else if(a=='C')
            return 100;
            else if(a=='D')
            return 500;
            else if(a=='M')
            return 1000;
    }
    
    int romanToDecimal(string &str) {
        // code here
        if(str.length()==1)
            return val(str[0]);
        
        int ans=0;
        int i=1;
        
        while(str[i]!='\0')
        {
            int flag=val(str[i-1]);
            int f=val(str[i]);
            if(val(f>flag))
            ans -= flag;
            else
            ans += flag;
            
            i++;
        }
        return ans+val(str[str.size()-1]);
    }
};
