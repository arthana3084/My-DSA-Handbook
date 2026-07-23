/*
==================================================
Problem      : Jump Game II
Platform     : LeetCode 45

Difficulty   : Medium

Pattern      : Greedy

Time          : O(n)
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

    int jump(vector<int>& nums)
    {
        int jumps = 0;
        int currentEnd = 0;
        int farthest = 0;

        for(int i = 0; i < nums.size() - 1; i++)
        {
            farthest = max(farthest, i + nums[i]);

            if(i == currentEnd)
            {
                jumps++;
                currentEnd = farthest;
            }
        }

        return jumps;
    }
};

int main()
{
    return 0;
}