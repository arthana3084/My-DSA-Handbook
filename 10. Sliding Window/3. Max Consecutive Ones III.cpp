/*
==================================================
Problem      : Max Consecutive Ones III
Platform     : LeetCode 1004
Difficulty   : Medium

Pattern      : Variable Sliding Window

Time          : O(n)
Space         : O(1)

Key Idea
---------
Keep at most k zeroes inside the window.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int longestOnes(vector<int>& nums,int k)
    {
        int left=0;
        int zero=0;
        int ans=0;

        for(int right=0;right<nums.size();right++)
        {
            if(nums[right]==0)
                zero++;

            while(zero>k)
            {
                if(nums[left]==0)
                    zero--;

                left++;
            }

            ans=max(ans,right-left+1);
        }

        return ans;
    }
};

int main()
{
    vector<int> nums={1,1,1,0,0,0,1,1,1,1,0};

    Solution obj;

    cout<<obj.longestOnes(nums,2);

    return 0;
}
