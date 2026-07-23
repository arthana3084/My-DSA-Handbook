/*
==================================================
Problem      : Implement Stack using Queue
Platform     : LeetCode 225
Difficulty   : Easy

Pattern      : Queue

Time          : Push O(n)

Space         : O(n)

Key Idea
---------
Rotate queue after every push.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class MyStack
{
    queue<int> q;

public:
    void push(int x)
    {
        q.push(x);

        for(int i=0;i<q.size()-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        int x=q.front();
        q.pop();
        return x;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    MyStack st;

    st.push(1);
    st.push(2);

    cout<<st.top();

    return 0;
}
