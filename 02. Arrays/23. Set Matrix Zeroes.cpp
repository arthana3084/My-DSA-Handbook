/*
==================================================
Problem      : Set Matrix Zeroes
Platform     : LeetCode 73
Difficulty   : Medium

Pattern      : Matrix

Time          : O(m*n)
Space         : O(1)

Key Idea
---------
Use first row and first column as markers.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix)
{
    int col0 = 1;
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i=0;i<n;i++)
    {
        if(matrix[i][0]==0) col0=0;

        for(int j=1;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=1;j--)
        {
            if(matrix[i][0]==0 || matrix[0][j]==0)
                matrix[i][j]=0;
        }

        if(col0==0)
            matrix[i][0]=0;
    }
}

int main()
{
    vector<vector<int>> matrix={
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    setZeroes(matrix);

    for(auto row:matrix)
    {
        for(int x:row)
            cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}
