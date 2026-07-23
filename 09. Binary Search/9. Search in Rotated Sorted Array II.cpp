/*
==================================================
Problem      : Search in Rotated Sorted Array II
Platform     : LeetCode 81

Difficulty   : Medium

Pattern      : Binary Search

Time          : O(log n) Average
Space         : O(1)

Key Idea
---------
Skip duplicates before deciding sorted half.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums,int target)
{
    int low=0,high=nums.size()-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(nums[mid]==target)
            return true;

        if(nums[low]==nums[mid] && nums[mid]==nums[high])
        {
            low++;
            high--;
        }
        else if(nums[low]<=nums[mid])
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

    return false;
}

int main()
{
    vector<int> nums={2,5,6,0,0,1,2};

    cout<<search(nums,0);
}
