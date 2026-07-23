/*
==================================================
Problem      : Remove Duplicates from Sorted Array
Platform     : LeetCode 26
Difficulty   : Easy

Pattern      : Two Pointers

Time          : O(n)
Space         : O(1)

Key Idea
---------
Use two pointers to overwrite duplicate elements.

Status : ⭐ Must Revise
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0;

    for(int j = 1; j < nums.size(); j++)
    {
        if(nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main()
{
    vector<int> nums = {1,1,2,2,3,4,4};

    int k = removeDuplicates(nums);

    for(int i = 0; i < k; i++)
        cout << nums[i] << " ";

    return 0;
}
