/*
==================================================
Problem      : Palindrome Partitioning
Platform     : LeetCode 131
Difficulty   : Medium

Pattern      : Backtracking

Time          : Exponential
Space         : O(n)

Key Idea
---------
Partition only if substring is palindrome.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<string>> ans;

    bool isPal(string &s,int l,int r)
    {
        while(l<r)
            if(s[l++]!=s[r--])
                return false;

        return true;
    }

    void solve(int idx,string &s,vector<string>& ds)
    {
        if(idx==s.size())
        {
            ans.push_back(ds);
            return;
        }

        for(int i=idx;i<s.size();i++)
        {
            if(isPal(s,idx,i))
            {
                ds.push_back(s.substr(idx,i-idx+1));
                solve(i+1,s,ds);
                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        vector<string> ds;
        solve(0,s,ds);
        return ans;
    }
};
