/*
==================================================
Problem      : Missing Number
Platform     : LeetCode 268

Difficulty   : Easy

Pattern      : XOR

Time          : O(n)
Space         : O(1)

Key Idea
---------
XOR all indices and array elements.
Equal values cancel each other, leaving the missing number.

Status : ⭐ Must Revise
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums)
{
    int xor1 = 0;
    int xor2 = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        xor1 ^= nums[i];
        xor2 ^= (i + 1);
    }

    return xor1 ^ xor2;
}

int main()
{
    vector<int> nums = {3,0,1};

    cout<<missingNumber(nums);

    return 0;
}
