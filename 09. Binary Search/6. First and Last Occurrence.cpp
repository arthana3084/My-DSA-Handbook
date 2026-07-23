/*
==================================================
Problem      : Find First and Last Position of Element
Platform     : LeetCode 34
Difficulty   : Medium

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
Perform two binary searches.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>& nums,int target)
{
    int low=0,high=nums.size()-1,ans=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(nums[mid]>=target)
        {
            if(nums[mid]==target) ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }

    return ans;
}

int lastOccurrence(vector<int>& nums,int target)
{
    int low=0,high=nums.size()-1,ans=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(nums[mid]<=target)
        {
            if(nums[mid]==target) ans=mid;
            low=mid+1;
        }
        else
            high=mid-1;
    }

    return ans;
}

int main()
{
    vector<int> nums={5,7,7,8,8,10};

    cout<<firstOccurrence(nums,8)<<" ";
    cout<<lastOccurrence(nums,8);
}
