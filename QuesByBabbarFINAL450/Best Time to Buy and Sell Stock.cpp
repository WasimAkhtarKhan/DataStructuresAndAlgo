//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int CP=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if((prices[i]-CP)>profit)
                profit=prices[i]-CP;
            if(CP>prices[i])
                CP=prices[i];
        }
        return profit;
    }
};
