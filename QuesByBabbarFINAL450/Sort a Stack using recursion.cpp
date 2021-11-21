//https://practice.geeksforgeeks.org/problems/sort-a-stack/1#

void sortedInsert(stack<int>&s,int n){
    if(s.size()==0||n>s.top()){
        s.push(n);
        return;
    }
    
    int x = s.top();
    s.pop();
    sortedInsert(s,n);
    s.push(x);
}

void SortedStack :: sort()
{
   //Your code here
   if(s.size()==1)
   return;
   
   int x = s.top();
   s.pop();
   sort();
   
   sortedInsert(s,x);
}
