/*
==================================================
Problem      : Merge Intervals
Platform     : LeetCode 56

Difficulty   : Medium

Pattern      : Greedy + Sorting

Time          : O(n log n)
Space         : O(n)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for(auto interval : intervals)
        {
            if(ans.empty() || ans.back()[1] < interval[0])
                ans.push_back(interval);
            else
                ans.back()[1] = max(ans.back()[1], interval[1]);
        }

        return ans;
    }
};

int main()
{
    return 0;
}