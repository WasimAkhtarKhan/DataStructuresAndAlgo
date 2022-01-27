//https://www.geeksforgeeks.org/minimize-cash-flow-among-given-set-friends-borrowed-money/

#include<iostream>
#include<algorithm>
#define N 3
using namespace std;
int getMinIndex(int arr[]) {
   int minInd = 0;
   for (int i=1; i<N; i++)
      if (arr[i] < arr[minInd])
      minInd = i;
   return minInd;
}
int getMaxIndex(int arr[]) {
   int maxInd = 0;
   for (int i=1; i<N; i++)
      if (arr[i] > arr[maxInd])
      maxInd = i;
   return maxInd;
}
void cashFlowTask(int amount[]) {
   int max_credit = getMaxIndex(amount), max_debit = getMinIndex(amount);
   if (amount[max_credit] == 0 && amount[max_debit] == 0)
   return;
   int min_val = min(-amount[max_debit], amount[max_credit]);
   amount[max_credit] -= min_val;
   amount[max_debit] += min_val;
   cout << "P" << max_debit << " sends " << min_val << " to " << "P" << max_credit << endl;
   cashFlowTask(amount);
}
void minCashFlow(int graph[][N]) {
   int amount[N] = {0};
   for (int p=0; p<N; p++)
   for (int i=0; i<N; i++)
   amount[p] += (graph[i][p] - graph[p][i]);
   cashFlowTask(amount);
}
int main() {
   int graph[N][N] = {
   {0, 1000, 2000},
   {0, 0, 5000},
   {0, 0, 0},};
   minCashFlow(graph);
}
