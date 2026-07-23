/*
==================================================
Problem      : Maximum Consecutive Ones
Platform     : LeetCode 485
Difficulty   : Easy

Pattern      : Array Traversal

Time          : O(n)
Space         : O(1)

Key Idea
---------
Count consecutive ones while traversing the array.

Status : ⭐ Must Revise
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums)
{
    int cnt = 0, maxi = 0;

    for(int x : nums)
    {
        if(x == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }

    return maxi;
}

int main()
{
    vector<int> nums = {1,1,0,1,1,1};

    cout << findMaxConsecutiveOnes(nums);

    return 0;
}
