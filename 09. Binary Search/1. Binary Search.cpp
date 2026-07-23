/*
==================================================
Problem      : Binary Search
Platform     : LeetCode 704
Difficulty   : Easy

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
Eliminate half of the search space every iteration.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(nums[mid] == target)
            return mid;

        if(nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> nums = {-1,0,3,5,9,12};

    cout << search(nums,9);

    return 0;
}
