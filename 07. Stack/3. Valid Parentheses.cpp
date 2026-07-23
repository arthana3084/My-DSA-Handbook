/*
==================================================
Problem      : Valid Parentheses
Platform     : LeetCode 20
Difficulty   : Easy

Pattern      : Stack

Time          : O(n)

Space         : O(n)

Key Idea
---------
Push opening brackets and match closing brackets.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for(char c:s)
    {
        if(c=='(' || c=='{' || c=='[')
            st.push(c);
        else
        {
            if(st.empty())
                return false;

            if((c==')' && st.top()!='(') ||
               (c=='}' && st.top()!='{') ||
               (c==']' && st.top()!='['))
                return false;

            st.pop();
        }
    }

    return st.empty();
}

int main()
{
    cout<<isValid("()[]{}");

    return 0;
}
