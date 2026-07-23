/*
==================================================
Problem      : Maximum Subarray
Platform     : LeetCode 53
Difficulty   : Medium

Pattern      : Kadane's Algorithm

Time          : O(n)
Space         : O(1)

Key Idea
---------
Discard negative prefix sums.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums)
{
    int sum = 0;
    int maxi = INT_MIN;

    for(int x : nums)
    {
        sum += x;

        maxi = max(maxi, sum);

        if(sum < 0)
            sum = 0;
    }

    return maxi;
}

int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout << maxSubArray(nums);

    return 0;
}
