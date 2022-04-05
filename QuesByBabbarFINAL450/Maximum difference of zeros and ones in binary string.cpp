//https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1

int maxSubstring(string S)
	{
	    // Your code goes here
	    int res = -1;
	    int c=0;
	    for(int i=0;i<S.size();i++){
	        if(S[i]=='1')
	        c--;
	        else
	        c++;
	        res = max(res,c);
	        c = max(c,0);
	    }
	    return res;
	}
