/*
==================================================
Problem      : Jump Game
Platform     : LeetCode 55

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

    bool canJump(vector<int>& nums)
    {
        int reachable = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(i > reachable)
                return false;

            reachable = max(reachable, i + nums[i]);
        }

        return true;
    }
};

int main()
{
    return 0;
}