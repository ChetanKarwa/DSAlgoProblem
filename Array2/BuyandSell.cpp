//Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/

/*
Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock),
design an algorithm to find the maximum profit.
Note that you cannot sell a stock before you buy one.
*/


int maxProfit(vector<int>& prices) {
    if(prices.size()<=1)
        return 0;
    int maxpro = 0;
    int max = prices[0];
    int min = prices[0];
    for(int i = 1;i<prices.size();i++)
    {
        if(prices[i]>max)
        {
            max = prices[i];
            if(maxpro<(max-min))
                maxpro = max-min;
        }
        else
        {
            if(min>prices[i])
            {
                min = prices[i];
            }
            max = prices[i];
        }
    }
    return maxpro;
    }
