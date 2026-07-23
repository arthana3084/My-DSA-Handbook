/*
==================================================
STL Topic : Stack

Functions
---------
push()
pop()
top()
empty()
size()

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);

    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top();

    return 0;
}
