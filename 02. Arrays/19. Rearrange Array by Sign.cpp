/*
==================================================
Problem      : Rearrange Array by Sign
Platform     : LeetCode 2149
Difficulty   : Medium

Pattern      : Two Pointers

Time          : O(n)
Space         : O(n)

Key Idea
---------
Place positives at even indices and negatives at odd indices.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums)
{
    vector<int> ans(nums.size());

    int pos = 0;
    int neg = 1;

    for(int x : nums)
    {
        if(x > 0)
        {
            ans[pos] = x;
            pos += 2;
        }
        else
        {
            ans[neg] = x;
            neg += 2;
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {3,1,-2,-5,2,-4};

    vector<int> ans = rearrangeArray(nums);

    for(int x : ans)
        cout << x << " ";

    return 0;
}
