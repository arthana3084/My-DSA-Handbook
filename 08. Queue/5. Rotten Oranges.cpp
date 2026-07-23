/*
==================================================
Problem      : Rotten Oranges
Platform     : LeetCode 994
Difficulty   : Medium

Pattern      : Multi-Source BFS

Time          : O(m*n)
Space         : O(m*n)

Key Idea
---------
Push all rotten oranges first.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid)
{
    int m=grid.size(),n=grid[0].size();

    queue<pair<int,int>> q;

    int fresh=0,time=0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==2)
                q.push({i,j});
            else if(grid[i][j]==1)
                fresh++;
        }
    }

    int dx[]={-1,1,0,0};
    int dy[]={0,0,-1,1};

    while(!q.empty() && fresh)
    {
        int sz=q.size();

        time++;

        while(sz--)
        {
            auto [x,y]=q.front();
            q.pop();

            for(int k=0;k<4;k++)
            {
                int nx=x+dx[k];
                int ny=y+dy[k];

                if(nx>=0 && ny>=0 && nx<m && ny<n && grid[nx][ny]==1)
                {
                    grid[nx][ny]=2;
                    fresh--;
                    q.push({nx,ny});
                }
            }
        }
    }

    return fresh?-1:time;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
