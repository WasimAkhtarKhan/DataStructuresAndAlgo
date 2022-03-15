//https://practice.geeksforgeeks.org/problems/largest-number-in-k-swaps-1587115620/1/

void backtracking(string&str,int index,string&res,int k){
        if(index==str.size()-1||k==0){
            for(int i=0;i<str.size();i++){
                if(res[i]>str[i])
                return;
                if(str[i]>res[i]){
                    res = str;
                    return;
                }
            }
            return;
        }
        
        int maxD = 0;
        for(int i=index;i<str.size();i++){
            maxD = max(maxD,str[i]-'0');
        }
        
        if(str[index]-'0'==maxD){
            backtracking(str,index+1,res,k);
            return;
        }
        
        for(int i=index+1;i<str.size();i++){
            if(str[i]-'0'==maxD){
                swap(str[index],str[i]);
                backtracking(str,index+1,res,k-1);
                swap(str[index],str[i]);
            }
        }
    }
    
    string findMaximumNum(string str, int k)
    {
       // code here.
       int n = str.size();
       string res = str;
       backtracking(str,0,res,k);
       return res;
    }
