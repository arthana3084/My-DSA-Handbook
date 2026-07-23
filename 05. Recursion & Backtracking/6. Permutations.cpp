/*
==================================================
Problem      : Permutations
Platform     : LeetCode 46
Difficulty   : Medium

Pattern      : Backtracking

Time          : O(n!)
Space         : O(n)

Key Idea
---------
Swap current index with every possible index.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;

    void solve(int idx, vector<int>& nums)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[idx],nums[i]);
            solve(idx+1,nums);
            swap(nums[idx],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums)
    {
        solve(0,nums);
        return ans;
    }
};
