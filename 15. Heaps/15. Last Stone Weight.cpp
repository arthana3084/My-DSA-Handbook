/*
==================================================
Problem      : Last Stone Weight
Platform     : LeetCode 1046

Difficulty   : Easy

Pattern      : Max Heap

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

    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int> pq;

        for(int x:stones)
            pq.push(x);

        while(pq.size()>1)
        {
            int a=pq.top();
            pq.pop();

            int b=pq.top();
            pq.pop();

            if(a!=b)
                pq.push(a-b);
        }

        return pq.empty()?0:pq.top();
    }
};

int main()
{
    return 0;
}