/*
==================================================
Problem      : Combination Sum II
Platform     : LeetCode 40
Difficulty   : Medium

Pattern      : Backtracking

Time          : Exponential
Space         : O(n)

Key Idea
---------
Sort and skip duplicates.

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
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }

        for(int i=idx;i<arr.size();i++)
        {
            if(i>idx && arr[i]==arr[i-1])
                continue;

            if(arr[i]>target)
                break;

            ds.push_back(arr[i]);
            dfs(i+1,target-arr[i],arr,ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates,int target)
    {
        sort(candidates.begin(),candidates.end());

        vector<int> ds;

        dfs(0,target,candidates,ds);

        return ans;
    }
};

int main()
{
    vector<int> arr={10,1,2,7,6,1,5};

    Solution obj;

    auto ans=obj.combinationSum2(arr,8);

    for(auto &v:ans)
    {
        for(int x:v)
            cout<<x<<" ";

        cout<<endl;
    }
}
