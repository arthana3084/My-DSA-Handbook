/*
==================================================
STL Topic : Queue

Functions
---------
push()
pop()
front()
back()

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();

    cout<<q.front();

    return 0;
}
