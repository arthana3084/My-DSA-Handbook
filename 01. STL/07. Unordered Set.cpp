/*
==================================================
STL Topic : Unordered Set

Unique Elements

Average Complexity : O(1)

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(5);

    for(auto x:s)
        cout<<x<<" ";

    return 0;
}
