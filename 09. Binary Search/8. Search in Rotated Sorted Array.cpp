/*
==================================================
Problem      : Search in Rotated Sorted Array
Platform     : LeetCode 33

Difficulty   : Medium

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
One half is always sorted.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums,int target)
{
    int low=0,high=nums.size()-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(nums[mid]==target)
            return mid;

        if(nums[low]<=nums[mid])
        {
            if(target>=nums[low] && target<nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else
        {
            if(target>nums[mid] && target<=nums[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums={4,5,6,7,0,1,2};

    cout<<search(nums,0);
}
