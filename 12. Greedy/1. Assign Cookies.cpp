/*
==================================================
Problem      : Assign Cookies
Platform     : LeetCode 455

Difficulty   : Easy

Pattern      : Greedy + Sorting

Time          : O(n log n)
Space         : O(1)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int findContentChildren(vector<int>& g, vector<int>& s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0;

        while(i < g.size() && j < s.size())
        {
            if(s[j] >= g[i])
                i++;

            j++;
        }

        return i;
    }
};

int main()
{
    return 0;
}