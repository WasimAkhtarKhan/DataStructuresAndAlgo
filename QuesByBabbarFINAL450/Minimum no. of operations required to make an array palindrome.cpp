//https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1

int PalinArray(int a[], int n)
{  //add code here.
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        int n=num;
        int digit=0,rev=0;
        do
        {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
        } while (num != 0);
        
        if(n!=rev)
        return 0;
    }
    return 1;
}
