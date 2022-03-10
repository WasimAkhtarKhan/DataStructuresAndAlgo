//https://www.geeksforgeeks.org/printing-solutions-n-queen-problem/
//https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1/#

bool isValid(int a,vector<int>&curr,int c){
        for(int i=0;i<c;i++)
        if(curr[i]==a||c-i==abs(a-curr[i]))
        return false;
        
        return true;
    }

    void Util(int c,int n,vector<vector<int>>&res,vector<int>curr){
        if(c==n){
            res.push_back(curr);
            return;
        }
        
        for(int i=0;i<n;i++){
            if(isValid(i+1,curr,c)){
                curr[c] = i+1;
                Util(c+1,n,res,curr);
            }
            curr[c] = 0;
        }
    }

    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>res;
        vector<int>curr(n,0);
        Util(0,n,res,curr);
        return res;
    }
