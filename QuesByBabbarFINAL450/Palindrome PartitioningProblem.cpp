//https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1

//Recursive solution
int isPalindrome(int l,int r,string&str){
        while(str[l]==str[r]&&l<r){
            l++;
            r--;
        }
        
        return l>=r;
    }
    int solve(int i,int j,string&str){
        if(i>=j)
        return 0;
        
        if(isPalindrome(i,j,str))
        return 0;
        
        int p = j-i;
        
        for(int k=i;k<j;k++){
            p = min(p,solve(i,k,str)+solve(k+1,j,str));
        }
        return 1+p;
    }
    int palindromicPartition(string str)
    {
        // code here
        return solve(0,str.size()-1,str);
    }



//DP Solution
int palindromicPartition(string str)
    {
        // code here
        int n = str.length();
        int C[n][n];
        bool P[n][n];
    
        for (int i = 0; i < n; i++) {
            P[i][i] = true;
            C[i][i] = 0;
        }
        for (int L = 2; L <= n; L++) {
            for (int i = 0; i < n - L + 1; i++) {
                int j = i + L - 1;
                if (L == 2)
                    P[i][j] = (str[i] == str[j]);
                else
                    P[i][j] = (str[i] == str[j]) && P[i + 1][j - 1];
    
                if (P[i][j] == true)
                    C[i][j] = 0;
                else {
                    C[i][j] = INT_MAX;
                    for (int k = i; k <= j - 1; k++)
                        C[i][j] = min(C[i][j], C[i][k] + C[k + 1][j] + 1);
                }
            }
        }
        return C[0][n - 1];
    }
