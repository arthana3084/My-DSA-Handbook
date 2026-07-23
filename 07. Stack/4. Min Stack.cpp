/*
==================================================
Problem      : Min Stack
Platform     : LeetCode 155
Difficulty   : Medium

Pattern      : Stack

Time          : O(1)
Space         : O(n)

Key Idea
---------
Maintain another stack storing minimums.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class MinStack
{
    stack<int> st,minSt;

public:

    void push(int val)
    {
        st.push(val);

        if(minSt.empty() || val<=minSt.top())
            minSt.push(val);
    }

    void pop()
    {
        if(st.top()==minSt.top())
            minSt.pop();

        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return minSt.top();
    }
};

int main()
{
    MinStack st;

    st.push(-2);
    st.push(0);
    st.push(-3);

    cout<<st.getMin();

    return 0;
}
