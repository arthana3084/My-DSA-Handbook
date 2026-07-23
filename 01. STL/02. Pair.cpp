/*
==================================================
STL Topic : Pair

Useful For
----------
Storing two related values.

Functions
---------
first
second
make_pair()

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;

    p.first=1;
    p.second="Arsha";

    cout<<p.first<<" "<<p.second<<endl;

    auto q=make_pair(10,20);

    cout<<q.first<<" "<<q.second;

    return 0;
}
