/*
==================================================
STL Topic : Map

Ordered Key-Value Pair

Insertion/Search/Delete : O(log n)

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> mp;

    mp[1]="One";
    mp[2]="Two";

    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;

    return 0;
}
