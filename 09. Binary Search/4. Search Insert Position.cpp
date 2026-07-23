/*
==================================================
Problem      : Search Insert Position
Platform     : LeetCode 35

Difficulty   : Easy

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
Find the first position where target can be inserted.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums,int target)
{
    int low=0,high=nums.size()-1;
    int ans=nums.size();

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(nums[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }

    return ans;
}

int main()
{
    vector<int> nums={1,3,5,6};

    cout<<searchInsert(nums,2);
}
