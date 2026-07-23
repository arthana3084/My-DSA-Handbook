/*
==================================================
Problem      : Sort Characters By Frequency
Platform     : LeetCode 451
Difficulty   : Medium

Pattern      : Hashing

Time          : O(n log n)
Space         : O(n)

Key Idea
---------
Sort characters based on frequency.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    unordered_map<char,int> mp;

    for(char c:s)
        mp[c]++;

    vector<pair<char,int>> v(mp.begin(),mp.end());

    sort(v.begin(),v.end(),[](auto &a,auto &b)
    {
        return a.second>b.second;
    });

    string ans="";

    for(auto it:v)
        ans.append(it.second,it.first);

    return ans;
}

int main()
{
    cout<<frequencySort("tree");

    return 0;
}
