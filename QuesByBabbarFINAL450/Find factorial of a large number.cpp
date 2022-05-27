//https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1#

void multiply(vector<int>&res,int x){
        int carry = 0;
        for(int i=0;i<res.size();i++){
            res[i] = res[i]*x + carry;
            carry = res[i]/10;
            res[i] = res[i]%10; 
        }
        
        while(carry){
            res.push_back(carry%10);
            carry /= 10;
        }
    }
    vector<int> factorial(int N){
        // code here
        vector<int>res;
        res.push_back(1);
        int x = 2;
        while(x<=N){
            multiply(res,x);
            x++;
        }
        reverse(res.begin(),res.end());
        return res;
    }
