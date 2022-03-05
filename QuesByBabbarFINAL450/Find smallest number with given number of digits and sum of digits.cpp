//https://practice.geeksforgeeks.org/problems/smallest-number5829/1

string smallestNumber(int S, int D){
        // code here 
        if(S>9*D)
        return "-1";
        
        string res = "";
        S--;
        while(S>=9&&D){
            res = "9"+res;
            S -= 9;
            D--;
        }
        while(D>1){
            res = to_string(S)+res;
            D--;
            S=0;
        }
        
        res = to_string(S+1) + res;
        return res;
    }
