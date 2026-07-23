/*
==================================================
Problem      : Move Zeroes
Platform     : LeetCode 283
Difficulty   : Easy

Pattern      : Two Pointers

Time          : O(n)
Space         : O(1)

Key Idea
---------
Move all non-zero elements to the front while
maintaining their order.

Status : ⭐ Must Revise
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    int j = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> nums = {0,1,0,3,12};

    moveZeroes(nums);

    for(int x:nums)
        cout<<x<<" ";

    return 0;
}
