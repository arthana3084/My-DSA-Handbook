/*
==================================================
Problem      : Best Time to Buy and Sell Stock
Platform     : LeetCode 121
Difficulty   : Easy

Pattern      : Prefix Minimum

Time          : O(n)
Space         : O(1)

Key Idea
---------
Track the minimum price seen so far.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int mini = prices[0];
    int profit = 0;

    for(int i = 1; i < prices.size(); i++)
    {
        profit = max(profit, prices[i] - mini);
        mini = min(mini, prices[i]);
    }

    return profit;
}

int main()
{
    vector<int> prices = {7,1,5,3,6,4};

    cout << maxProfit(prices);

    return 0;
}
