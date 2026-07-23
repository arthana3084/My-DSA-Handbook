/*
==================================================
Problem      : Online Stock Span
Platform     : LeetCode 901
Difficulty   : Medium

Pattern      : Monotonic Stack

Time          : O(1) Amortized
Space         : O(n)

Key Idea
---------
Store {price, span} in stack.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class StockSpanner
{
    stack<pair<int,int>> st;

public:

    int next(int price)
    {
        int span=1;

        while(!st.empty() && st.top().first<=price)
        {
            span+=st.top().second;
            st.pop();
        }

        st.push({price,span});

        return span;
    }
};

int main()
{
    StockSpanner sp;

    cout<<sp.next(100)<<endl;
    cout<<sp.next(80)<<endl;
    cout<<sp.next(60)<<endl;
    cout<<sp.next(70)<<endl;
    cout<<sp.next(60)<<endl;
    cout<<sp.next(75)<<endl;
    cout<<sp.next(85)<<endl;

    return 0;
}
