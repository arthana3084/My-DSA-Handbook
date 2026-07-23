/*
==================================================
Problem      : Count Frequencies using HashMap
Platform     : General

Difficulty   : Easy

Pattern      : Hashing

Time          : O(n)
Space         : O(n)

Key Idea
---------
Use unordered_map for constant time insertion.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> countFrequency(vector<int>& nums)
{
    unordered_map<int,int> mp;

    for(int x:nums)
        mp[x]++;

    return mp;
}

int main()
{
    vector<int> nums={10,20,20,10,30};

    auto mp=countFrequency(nums);

    for(auto it:mp)
        cout<<it.first<<" "<<it.second<<endl;
}
