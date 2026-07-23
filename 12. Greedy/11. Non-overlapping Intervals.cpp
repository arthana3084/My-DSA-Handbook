/*
==================================================
Problem      : Non-overlapping Intervals
Platform     : LeetCode 435

Difficulty   : Medium

Pattern      : Greedy + Sorting

Time          : O(n log n)
Space         : O(1)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int eraseOverlapIntervals(vector<vector<int>>& intervals)
    {
        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b)
             {
                 return a[1] < b[1];
             });

        int count = 0;
        int end = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++)
        {
            if(intervals[i][0] < end)
                count++;
            else
                end = intervals[i][1];
        }

        return count;
    }
};

int main()
{
    return 0;
}