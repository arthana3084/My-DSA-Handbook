/*
==================================================
Problem      : Kth Largest Element in an Array
Platform     : LeetCode 215

Difficulty   : Medium

Pattern      : Min Heap

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

    int findKthLargest(vector<int>& nums,int k)
    {
        priority_queue<int,vector<int>,greater<int>> pq;

        for(int x:nums)
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