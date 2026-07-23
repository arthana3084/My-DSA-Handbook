/*
==================================================
Problem      : Minimum Cost to Connect Sticks
Platform     : LeetCode 1167

Difficulty   : Medium

Pattern      : Greedy + Min Heap

Time          : O(n log n)
Space         : O(n)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int connectSticks(vector<int>& sticks)
    {
        priority_queue<int,
                       vector<int>,
                       greater<int>> pq;

        for(int x:sticks)
            pq.push(x);

        int cost=0;

        while(pq.size()>1)
        {
            int a=pq.top(); pq.pop();
            int b=pq.top(); pq.pop();

            cost+=a+b;

            pq.push(a+b);
        }

        return cost;
    }
};

int main()
{
    return 0;
}