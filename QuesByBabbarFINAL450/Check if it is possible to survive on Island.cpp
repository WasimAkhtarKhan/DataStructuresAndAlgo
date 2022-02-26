//https://www.geeksforgeeks.org/survival/
//https://practice.geeksforgeeks.org/problems/check-if-it-is-possible-to-survive-on-island4922/1#

int minimumDays(int S, int N, int M){
     // code here
     if(N<M||(N*6<M*7&&S>6))
     return -1;
        
     return ceil((double)(S*M)/N);
}
