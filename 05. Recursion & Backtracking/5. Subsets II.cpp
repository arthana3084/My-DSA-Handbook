/*
==================================================
Problem      : Subsets II
Platform     : LeetCode 90
Difficulty   : Medium

Pattern      : Backtracking

Time          : O(2^n)
Space         : O(n)

Key Idea
---------
Sort and skip duplicate choices.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    vector<vector<int>> ans;

    void dfs(int idx,vector<int>& nums,vector<int>& ds)
    {
        ans.push_back(ds);

        for(int i=idx;i<nums.size();i++)
        {
            if(i>idx && nums[i]==nums[i-1])
                continue;

            ds.push_back(nums[i]);
            dfs(i+1,nums,ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());

        vector<int> ds;

        dfs(0,nums,ds);

        return ans;
    }
};

int main()
{
    vector<int> nums={1,2,2};

    Solution obj;

    auto ans=obj.subsetsWithDup(nums);

    for(auto &v:ans)
    {
        for(int x:v)
            cout<<x<<" ";

        cout<<endl;
    }
}
