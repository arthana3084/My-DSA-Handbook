/*
==================================================
Problem      : K Closest Points to Origin
Platform     : LeetCode 973

Difficulty   : Medium

Pattern      : Max Heap

Time          : O(n log k)
Space         : O(k)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points,int k)
    {
        priority_queue<pair<int,vector<int>>> pq;

        for(auto p:points)
        {
            int dist=p[0]*p[0]+p[1]*p[1];

            pq.push({dist,p});

            if(pq.size()>k)
                pq.pop();
        }

        vector<vector<int>> ans;

        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

int main()
{
    return 0;
}