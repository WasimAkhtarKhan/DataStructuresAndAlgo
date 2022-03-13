//https://practice.geeksforgeeks.org/problems/word-break-part-23249/1#

bool found(string w,vector<string>&dict,int n){
        for(int i=0;i<n;i++)
        if(w==dict[i])
        return true;
        
        return false;
    }

    void backtrack(int i,int n, vector<string>&dict,string sen,string&s,vector<string>&res){
        if(i==s.length()){
            res.push_back(sen);
            return;
        }
        
        string w = "";
        for(int j=i;j<s.length();j++){
            w += s[j];
            if(found(w,dict,n)){
                if(sen.length()==0)
                backtrack(j+1,n,dict,w,s,res);
                else
                backtrack(j+1,n,dict,sen+" "+w,s,res);
            }
        }
    }
    

    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        vector<string>res;
        string sen = "";
        backtrack(0,n,dict,sen,s,res);
        return res;
    }
