/*
==================================================
Problem      : Kth Smallest Element
Platform     : GFG

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

    int kthSmallest(vector<int>& arr,int k)
    {
        priority_queue<int> pq;

        for(int x:arr)
        {
            pq.push(x);

            if(pq.size()>k)
                pq.pop();
        }

        return pq.top();
    }
};

int main()
{
    return 0;
}