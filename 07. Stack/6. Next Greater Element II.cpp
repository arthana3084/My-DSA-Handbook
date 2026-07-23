/*
==================================================
Problem      : Next Greater Element II
Platform     : LeetCode 503
Difficulty   : Medium

Pattern      : Monotonic Stack

Time          : O(n)
Space         : O(n)

Key Idea
---------
Traverse twice to simulate circular array.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums)
{
    int n=nums.size();

    vector<int> ans(n,-1);

    stack<int> st;

    for(int i=2*n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=nums[i%n])
            st.pop();

        if(i<n)
            ans[i]=st.empty()?-1:st.top();

        st.push(nums[i%n]);
    }

    return ans;
}

int main()
{
    vector<int> nums={1,2,1};

    vector<int> ans=nextGreaterElements(nums);

    for(int x:ans)
        cout<<x<<" ";

    return 0;
}
