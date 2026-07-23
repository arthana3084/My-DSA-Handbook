/*
==================================================
Problem      : Sort Colors
Platform     : LeetCode 75
Difficulty   : Medium

Pattern      : Dutch National Flag

Time          : O(n)
Space         : O(1)

Key Idea
---------
Maintain low, mid and high pointers.

Status : ⭐ Must Revise
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while(mid <= high)
    {
        if(nums[mid] == 0)
            swap(nums[low++], nums[mid++]);

        else if(nums[mid] == 1)
            mid++;

        else
            swap(nums[mid], nums[high--]);
    }
}

int main()
{
    vector<int> nums = {2,0,2,1,1,0};

    sortColors(nums);

    for(int x : nums)
        cout << x << " ";

    return 0;
}
