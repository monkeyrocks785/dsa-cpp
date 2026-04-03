// Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include <bits/stdc++.h>
using namespace std;

int stockBuySell(vector<int> &prices)
{
    int maxProfit = 0;
    // Approach : Brute Force
    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = 0; j < prices.size(); j++)
        {
            if (j > i)
            {
                int profit = prices[j] - prices[i];
                maxProfit = max(maxProfit, profit);
            }
        }
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max Profit: " << stockBuySell(prices) << endl;
    return 0;
}