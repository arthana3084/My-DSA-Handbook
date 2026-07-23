/*
==================================================
Problem      : Subarray Product Less Than K
Platform     : LeetCode 713
Difficulty   : Medium

Pattern      : Variable Sliding Window

Time          : O(n)
Space         : O(1)

Key Idea
---------
Shrink while product >= k.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int numSubarrayProductLessThanK(vector<int>& nums,int k)
    {
        if(k<=1)
            return 0;

        int left=0;
        long long prod=1;
        int ans=0;

        for(int right=0;right<nums.size();right++)
        {
            prod*=nums[right];

            while(prod>=k)
                prod/=nums[left++];

            ans+=right-left+1;
        }

        return ans;
    }
};

int main()
{
    vector<int> nums={10,5,2,6};

    Solution obj;

    cout<<obj.numSubarrayProductLessThanK(nums,100);

    return 0;
}
