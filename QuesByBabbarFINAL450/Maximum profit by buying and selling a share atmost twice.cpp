//https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-twice/
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/

int maxProfit(vector<int>& arr) {
        int first_buy = INT_MIN;
        int first_sell = 0;
        int second_buy = INT_MIN;
        int second_sell = 0;
       
        for(int i=0;i<arr.size();i++) {
            first_buy = max(first_buy,-arr[i]);
            first_sell = max(first_sell,first_buy+arr[i]);
            second_buy = max(second_buy,first_sell-arr[i]);
            second_sell = max(second_sell,second_buy+arr[i]);
        }
        return second_sell;
    }
