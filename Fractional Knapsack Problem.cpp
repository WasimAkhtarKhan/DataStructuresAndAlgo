//https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1#

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(Item a,Item b){
        return (double)a.value/a.weight>(double)b.value/b.weight;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double val = 0.0;
        sort(arr,arr+n,cmp);
        int w=0;
        for(int i=0;i<n;i++){
            if(w+arr[i].weight<=W){
                w += arr[i].weight;
                val += arr[i].value;
            }
            else{
                val += arr[i].value*((double)(W-w)/arr[i].weight);
                break;
            }
        }
        return val;
    }
        
};
