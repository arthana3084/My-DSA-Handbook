/*
==================================================
Problem      : Merge Intervals
Platform     : LeetCode 56
Difficulty   : Medium

Pattern      : Sorting + Intervals

Time          : O(n log n)
Space         : O(n)

Key Idea
---------
Sort intervals and merge overlapping ones.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals)
{
    sort(intervals.begin(),intervals.end());

    vector<vector<int>> ans;

    for(auto interval:intervals)
    {
        if(ans.empty() || ans.back()[1]<interval[0])
            ans.push_back(interval);
        else
            ans.back()[1]=max(ans.back()[1],interval[1]);
    }

    return ans;
}

int main()
{
    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};

    vector<vector<int>> ans=merge(intervals);

    for(auto row:ans)
    {
        cout<<"["<<row[0]<<","<<row[1]<<"] ";
    }

    return 0;
}
