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
Start counting only when current element is the beginning
of a sequence.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums)
{
    unordered_set<int> st(nums.begin(), nums.end());

    int longest = 0;

    for(int x : st)
    {
        if(st.find(x-1) == st.end())
        {
            int cnt = 1;
            int cur = x;

            while(st.find(cur+1) != st.end())
            {
                cur++;
                cnt++;
            }

            longest = max(longest, cnt);
        }
    }

    return longest;
}

int main()
{
    vector<int> nums = {100,4,200,1,3,2};

    cout << longestConsecutive(nums);

    return 0;
}
