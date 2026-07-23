/*
==================================================
STL Topic : Unordered Map

Hash Table

Average Complexity : O(1)

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int> mp;

    mp[1]=100;
    mp[2]=200;

    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;

    return 0;
}
