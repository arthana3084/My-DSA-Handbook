/*
==================================================
Problem      : Find the Duplicate Number
Platform     : LeetCode 287
Difficulty   : Medium

Pattern      : Floyd's Cycle Detection

Time          : O(n)
Space         : O(1)

Key Idea
---------
Treat array as a linked list.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums)
{
    int slow=nums[0];
    int fast=nums[0];

    do
    {
        slow=nums[slow];
        fast=nums[nums[fast]];
    }
    while(slow!=fast);

    slow=nums[0];

    while(slow!=fast)
    {
        slow=nums[slow];
        fast=nums[fast];
    }

    return slow;
}

int main()
{
    vector<int> nums={1,3,4,2,2};

    cout<<findDuplicate(nums);
}
