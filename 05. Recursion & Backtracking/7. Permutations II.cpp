/*
==================================================
Problem      : Permutations II
Platform     : LeetCode 47
Difficulty   : Medium

Pattern      : Backtracking

Time          : O(n!)
Space         : O(n)

Key Idea
---------
Sort and skip duplicate permutations.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, vector<int>& ds, vector<int>& vis)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(vis[i]) continue;

            if(i>0 && nums[i]==nums[i-1] && !vis[i-1])
                continue;

            vis[i]=1;
            ds.push_back(nums[i]);

            solve(nums,ds,vis);

            ds.pop_back();
            vis[i]=0;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());

        vector<int> ds;
        vector<int> vis(nums.size(),0);

        solve(nums,ds,vis);

        return ans;
    }
};
