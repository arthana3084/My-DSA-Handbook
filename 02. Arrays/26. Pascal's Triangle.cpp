/*
==================================================
Problem      : Pascal's Triangle
Platform     : LeetCode 118
Difficulty   : Easy

Pattern      : Simulation

Time          : O(n²)
Space         : O(n²)

Key Idea
---------
Each element is the sum of the two elements above it.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;

    for(int i=0;i<numRows;i++)
    {
        vector<int> row(i+1,1);

        for(int j=1;j<i;j++)
            row[j]=ans[i-1][j-1]+ans[i-1][j];

        ans.push_back(row);
    }

    return ans;
}

int main()
{
    vector<vector<int>> ans=generate(5);

    for(auto row:ans)
    {
        for(int x:row)
            cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}
