/*
==================================================
Problem      : Single Element in a Sorted Array
Platform     : LeetCode 540
Difficulty   : Medium

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
Pairs occupy even-odd indices before the answer.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums)
{
    int low=0,high=nums.size()-1;

    while(low<high)
    {
        int mid=low+(high-low)/2;

        if(mid&1)
            mid--;

        if(nums[mid]==nums[mid+1])
            low=mid+2;
        else
            high=mid;
    }

    return nums[low];
}

int main()
{
    vector<int> nums={1,1,2,3,3,4,4,8,8};

    cout<<singleNonDuplicate(nums);

    return 0;
}
