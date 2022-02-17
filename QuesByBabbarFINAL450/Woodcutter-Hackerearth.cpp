//https://www.hackerearth.com/problem/algorithm/woodcutter/
//https://www.spoj.com/problems/EKO/
//https://www.interviewbit.com/old/problems/woodcutting-made-easy/

bool ispossible(vector<int>&A,int ht,int B)
{  long long int sum=0;
    for(long long int i:A)
    {
        if(i>=ht)
        {
            sum+=i-ht;
            if(sum>=B)
            return true;
        }
    }
    if(sum>=B)
    return true;
    return false;
}

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
   long long int e=0;
  long long int s=0;
    int ans=0;
    for(long long int i:A)
    {
        s=min(s,i);
        e+=i;
    }
    while(s<=e)
    {
         long long int mid=s+(e-s)/2;
        if(ispossible(A,mid,B))
        {
            ans=mid;
            s=mid+1;
        }
        else
        e=mid-1;
    }
    
    return ans;
}
