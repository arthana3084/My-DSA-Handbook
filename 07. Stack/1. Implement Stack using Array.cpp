/*
==================================================
Problem      : Implement Stack using Array
Platform     : Basic
Difficulty   : Easy

Pattern      : Stack

Time          : O(1)
Space         : O(n)

Key Idea
---------
Maintain top index.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int arr[1000];
    int topIndex;

public:
    Stack()
    {
        topIndex=-1;
    }

    void push(int x)
    {
        arr[++topIndex]=x;
    }

    void pop()
    {
        if(topIndex!=-1)
            topIndex--;
    }

    int top()
    {
        return arr[topIndex];
    }

    bool empty()
    {
        return topIndex==-1;
    }
};

int main()
{
    Stack st;

    st.push(10);
    st.push(20);

    cout<<st.top();

    return 0;
}
