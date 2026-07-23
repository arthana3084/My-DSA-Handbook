/*
==================================================
STL Topic : Deque

Functions
---------
push_front()
push_back()
pop_front()
pop_back()

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(5);

    cout<<dq.front()<<endl;
    cout<<dq.back();

    return 0;
}
