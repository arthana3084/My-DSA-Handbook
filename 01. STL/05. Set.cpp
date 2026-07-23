/*
==================================================
STL Topic : Set

Stores Unique Elements

Ordered

Insertion/Search/Delete : O(log n)

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(5);

    for(auto x:s)
        cout<<x<<" ";

    return 0;
}
