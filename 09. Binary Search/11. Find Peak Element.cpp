/*
==================================================
Problem      : Find Peak Element
Platform     : LeetCode 162
Difficulty   : Medium

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
Move towards the increasing slope.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums)
{
    int low=0,high=nums.size()-1;

    while(low<high)
    {
        int mid=low+(high-low)/2;

        if(nums[mid]>nums[mid+1])
            high=mid;
        else
            low=mid+1;
    }

    return low;
}

int main()
{
    vector<int> nums={1,2,1,3,5,6,4};

    cout<<findPeakElement(nums);

    return 0;
}
