/*
==================================================
Problem      : Next Greater Element
Platform     : GFG
Difficulty   : Easy

Pattern      : Monotonic Stack

Time          : O(n)
Space         : O(n)

Key Idea
---------
Maintain decreasing stack.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int>& arr)
{
    int n=arr.size();

    vector<int> ans(n);

    stack<int> st;

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=arr[i])
            st.pop();

        ans[i]=st.empty()?-1:st.top();

        st.push(arr[i]);
    }

    return ans;
}

int main()
{
    vector<int> arr={4,5,2,25};

    vector<int> ans=nextGreater(arr);

    for(int x:ans)
        cout<<x<<" ";

    return 0;
}
