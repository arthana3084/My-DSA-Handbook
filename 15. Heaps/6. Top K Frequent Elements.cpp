/*
==================================================
Problem      : Top K Frequent Elements
Platform     : LeetCode 347

Difficulty   : Medium

Pattern      : HashMap + Min Heap

Time          : O(n log k)
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

    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int,int> freq;

        for(int x:nums)
            freq[x]++;

        priority_queue<pair<int,int>,
                       vector<pair<int,int>>,
                       greater<pair<int,int>>> pq;

        for(auto it:freq)
        {
            pq.push({it.second,it.first});

            if(pq.size()>k)
                pq.pop();
        }

        vector<int> ans;

        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};

int main()
{
    return 0;
}