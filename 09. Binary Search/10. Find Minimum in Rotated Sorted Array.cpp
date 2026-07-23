/*
==================================================
Problem      : Find Minimum in Rotated Sorted Array
Platform     : LeetCode 153

Difficulty   : Medium

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
Minimum lies in the unsorted half.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums)
{
    int low=0,high=nums.size()-1;
    int ans=INT_MAX;

    while(low<=high)
    {
        if(nums[low]<=nums[high])
        {
            ans=min(ans,nums[low]);
            break;
        }

        int mid=(low+high)/2;

        if(nums[low]<=nums[mid])
        {
            ans=min(ans,nums[low]);
            low=mid+1;
        }
        else
        {
            ans=min(ans,nums[mid]);
            high=mid-1;
        }
    }

    return ans;
}

int main()
{
    vector<int> nums={4,5,6,7,0,1,2};

    cout<<findMin(nums);
}
