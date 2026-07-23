/*
==================================================
Problem      : Combination Sum
Platform     : LeetCode 39
Difficulty   : Medium

Pattern      : Backtracking

Time          : Exponential
Space         : O(n)

Key Idea
---------
Pick same element multiple times.

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

    void dfs(int idx,int target,vector<int>& arr,vector<int>& ds)
    {
        if(idx==arr.size())
        {
            if(target==0)
                ans.push_back(ds);

            return;
        }

        if(arr[idx]<=target)
        {
            ds.push_back(arr[idx]);
            dfs(idx,target-arr[idx],arr,ds);
            ds.pop_back();
        }

        dfs(idx+1,target,arr,ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,int target)
    {
        vector<int> ds;

        dfs(0,target,candidates,ds);

        return ans;
    }
};

int main()
{
    vector<int> arr={2,3,6,7};

    Solution obj;

    auto ans=obj.combinationSum(arr,7);

    for(auto &v:ans)
    {
        for(int x:v)
            cout<<x<<" ";

        cout<<endl;
    }
}
