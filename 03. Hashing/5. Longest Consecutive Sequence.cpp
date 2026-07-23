/*
==================================================
Problem      : Longest Consecutive Sequence
Platform     : LeetCode 128

Difficulty   : Medium

Pattern      : Hashing

Time          : O(n)
Space         : O(n)

Key Idea
---------
Start only from sequence beginnings.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums)
{
    unordered_set<int> st(nums.begin(),nums.end());

    int ans=0;

    for(int x:st)
    {
        if(!st.count(x-1))
        {
            int len=1;

            while(st.count(x+len))
                len++;

            ans=max(ans,len);
        }
    }

    return ans;
}

int main()
{
    vector<int> nums={100,4,200,1,3,2};

    cout<<longestConsecutive(nums);
}
