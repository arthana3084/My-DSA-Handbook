/*
==================================================
Problem      : Subarray Sum Equals K
Platform     : LeetCode 560
Difficulty   : Medium

Pattern      : Prefix Sum + Hashing

Time          : O(n)
Space         : O(n)

Key Idea
---------
Maintain frequency of prefix sums.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums,int k)
{
    unordered_map<int,int> mp;

    mp[0]=1;

    int sum=0,cnt=0;

    for(int x:nums)
    {
        sum+=x;

        if(mp.count(sum-k))
            cnt+=mp[sum-k];

        mp[sum]++;
    }

    return cnt;
}

int main()
{
    vector<int> nums={1,2,3};

    cout<<subarraySum(nums,3);
}
