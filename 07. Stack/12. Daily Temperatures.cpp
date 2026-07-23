/*
==================================================
Problem      : Daily Temperatures
Platform     : LeetCode 739
Difficulty   : Medium

Pattern      : Monotonic Stack

Time          : O(n)
Space         : O(n)

Key Idea
---------
Store indices in decreasing order.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temp)
{
    int n=temp.size();

    vector<int> ans(n,0);

    stack<int> st;

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && temp[st.top()]<=temp[i])
            st.pop();

        if(!st.empty())
            ans[i]=st.top()-i;

        st.push(i);
    }

    return ans;
}

int main()
{
    vector<int> temp={73,74,75,71,69,72,76,73};

    vector<int> ans=dailyTemperatures(temp);

    for(int x:ans)
        cout<<x<<" ";

    return 0;
}
