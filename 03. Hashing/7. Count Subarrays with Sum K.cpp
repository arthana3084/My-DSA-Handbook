/*
==================================================
Problem      : Count Subarrays with Sum K
Platform     : Coding Ninjas
Difficulty   : Medium

Pattern      : Prefix Sum + Hashing

Time          : O(n)
Space         : O(n)

Key Idea
---------
Store frequency of prefix sums.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int>& nums,int k)
{
    unordered_map<int,int> mp;

    mp[0]=1;

    int sum=0,ans=0;

    for(int x:nums)
    {
        sum+=x;

        if(mp.count(sum-k))
            ans+=mp[sum-k];

        mp[sum]++;
    }

    return ans;
}

int main()
{
    vector<int> nums={1,1,1};

    cout<<countSubarrays(nums,2);
}
