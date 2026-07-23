/*
==================================================
Problem      : Connect Ropes to Minimize Cost
Platform     : GFG

Difficulty   : Easy

Pattern      : Min Heap

Time          : O(n log n)
Space         : O(n)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    long long minCost(long long arr[],long long n)
    {
        priority_queue<long long,
                       vector<long long>,
                       greater<long long>> pq;

        for(int i=0;i<n;i++)
            pq.push(arr[i]);

        long long ans=0;

        while(pq.size()>1)
        {
            long long a=pq.top();
            pq.pop();

            long long b=pq.top();
            pq.pop();

            ans+=a+b;

            pq.push(a+b);
        }

        return ans;
    }
};

int main()
{
    return 0;
}