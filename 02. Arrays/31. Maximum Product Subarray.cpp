/*
==================================================
Problem      : Maximum Product Subarray
Platform     : LeetCode 152

Difficulty   : Medium

Pattern      : Prefix & Suffix Product

Time          : O(n)
Space         : O(1)

Key Idea
---------
Traverse from both directions while maintaining products.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums)
{
    int pre=1,suf=1;
    int ans=INT_MIN;
    int n=nums.size();

    for(int i=0;i<n;i++)
    {
        if(pre==0) pre=1;
        if(suf==0) suf=1;

        pre*=nums[i];
        suf*=nums[n-i-1];

        ans=max(ans,max(pre,suf));
    }

    return ans;
}

int main()
{
    vector<int> nums={2,3,-2,4};

    cout<<maxProduct(nums);

    return 0;
}
