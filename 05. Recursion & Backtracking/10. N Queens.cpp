/*
==================================================
Problem      : N Queens
Platform     : LeetCode 51
Difficulty   : Hard

Pattern      : Backtracking

Time          : O(N!)
Space         : O(N)

Key Idea
---------
Use column and diagonal arrays.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<string>> ans;

    void solve(int col,vector<string>& board,
               vector<int>& leftRow,
               vector<int>& upperDiag,
               vector<int>& lowerDiag)
    {
        int n=board.size();

        if(col==n)
        {
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++)
        {
            if(leftRow[row]==0 &&
               lowerDiag[row+col]==0 &&
               upperDiag[n-1+col-row]==0)
            {
                board[row][col]='Q';

                leftRow[row]=1;
                lowerDiag[row+col]=1;
                upperDiag[n-1+col-row]=1;

                solve(col+1,board,leftRow,upperDiag,lowerDiag);

                board[row][col]='.';

                leftRow[row]=0;
                lowerDiag[row+col]=0;
                upperDiag[n-1+col-row]=0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> board(n,string(n,'.'));

        vector<int> leftRow(n,0);
        vector<int> upperDiag(2*n-1,0);
        vector<int> lowerDiag(2*n-1,0);

        solve(0,board,leftRow,upperDiag,lowerDiag);

        return ans;
    }
};
