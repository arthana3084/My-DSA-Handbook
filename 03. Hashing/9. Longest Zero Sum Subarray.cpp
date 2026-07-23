/*
==================================================
Problem      : Longest Zero Sum Subarray
Platform     : GFG
Difficulty   : Medium

Pattern      : Prefix Sum + Hashing

Time          : O(n)
Space         : O(n)

Key Idea
---------
Repeated prefix sum means zero-sum subarray.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int>& arr)
{
    unordered_map<int,int> mp;

    int sum=0,ans=0;

    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];

        if(sum==0)
            ans=i+1;

        if(mp.count(sum))
            ans=max(ans,i-mp[sum]);
        else
            mp[sum]=i;
    }

    return ans;
}

int main()
{
    vector<int> arr={15,-2,2,-8,1,7,10,23};

    cout<<maxLen(arr);
}
