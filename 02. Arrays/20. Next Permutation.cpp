/*
==================================================
Problem      : Next Permutation
Platform     : LeetCode 31
Difficulty   : Medium

Pattern      : Simulation

Time          : O(n)
Space         : O(1)

Key Idea
---------
Find the first decreasing element from the end,
swap it with the next greater element,
then reverse the suffix.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums)
{
    next_permutation(nums.begin(), nums.end());
}

int main()
{
    vector<int> nums = {1,2,3};

    nextPermutation(nums);

    for(int x : nums)
        cout << x << " ";

    return 0;
}
