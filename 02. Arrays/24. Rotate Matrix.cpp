/*
==================================================
Problem      : Rotate Image
Platform     : LeetCode 48
Difficulty   : Medium

Pattern      : Matrix

Time          : O(n²)
Space         : O(1)

Key Idea
---------
Transpose the matrix and reverse every row.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix)
{
    int n = matrix.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            swap(matrix[i][j],matrix[j][i]);
    }

    for(int i=0;i<n;i++)
        reverse(matrix[i].begin(),matrix[i].end());
}

int main()
{
    vector<vector<int>> matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotate(matrix);

    for(auto row:matrix)
    {
        for(int x:row)
            cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}
