/*
==================================================
Problem      : Minimum Size Subarray Sum
Platform     : LeetCode 209
Difficulty   : Medium

Pattern      : Variable Sliding Window

Time          : O(n)
Space         : O(1)

Key Idea
---------
Shrink window whenever sum >= target.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int minSubArrayLen(int target,vector<int>& nums)
    {
        int left=0;
        int sum=0;
        int ans=INT_MAX;

        for(int right=0;right<nums.size();right++)
        {
            sum+=nums[right];

            while(sum>=target)
            {
                ans=min(ans,right-left+1);
                sum-=nums[left++];
            }
        }

        return ans==INT_MAX?0:ans;
    }
};

int main()
{
    vector<int> nums={2,3,1,2,4,3};

    Solution obj;

    cout<<obj.minSubArrayLen(7,nums);

    return 0;
}
