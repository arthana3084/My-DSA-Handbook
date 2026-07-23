/*
==================================================
Problem      : Single Number
Platform     : LeetCode 136
Difficulty   : Easy

Pattern      : XOR

Time          : O(n)
Space         : O(1)

Key Idea
---------
XOR of same numbers becomes zero.

Status : ⭐ Must Revise
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums)
{
    int ans = 0;

    for(int x : nums)
        ans ^= x;

    return ans;
}

int main()
{
    vector<int> nums = {2,2,1};

    cout << singleNumber(nums);

    return 0;
}
