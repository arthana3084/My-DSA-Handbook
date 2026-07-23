/*
==================================================
Problem      : Subsets
Platform     : LeetCode 78
Difficulty   : Medium

Pattern      : Backtracking

Time          : O(2^n)
Space         : O(n)

Key Idea
---------
Generate every subset recursively.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    vector<vector<int>> ans;

    void dfs(int idx,vector<int>& nums,vector<int>& cur)
    {
        if(idx==nums.size())
        {
            ans.push_back(cur);
            return;
        }

        cur.push_back(nums[idx]);
        dfs(idx+1,nums,cur);

        cur.pop_back();
        dfs(idx+1,nums,cur);
    }

    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<int> cur;
        dfs(0,nums,cur);
        return ans;
    }
};

int main()
{
    vector<int> nums={1,2,3};

    Solution obj;

    auto ans=obj.subsets(nums);

    for(auto &v:ans)
    {
        for(int x:v)
            cout<<x<<" ";

        cout<<endl;
    }
}
