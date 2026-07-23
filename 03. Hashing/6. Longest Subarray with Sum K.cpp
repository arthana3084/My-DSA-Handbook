/*
==================================================
Problem      : Longest Subarray with Sum K
Platform     : GFG
Difficulty   : Medium

Pattern      : Prefix Sum + Hashing

Time          : O(n)
Space         : O(n)

Key Idea
---------
Store first occurrence of every prefix sum.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr,int k)
{
    unordered_map<int,int> mp;

    int sum=0,maxLen=0;

    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];

        if(sum==k)
            maxLen=i+1;

        if(mp.count(sum-k))
            maxLen=max(maxLen,i-mp[sum-k]);

        if(!mp.count(sum))
            mp[sum]=i;
    }

    return maxLen;
}

int main()
{
    vector<int> arr={1,2,3,1,1,1,1};

    cout<<longestSubarray(arr,3);
}
