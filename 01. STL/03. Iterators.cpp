/*
==================================================
STL Topic : Iterators

Functions
---------
begin()
end()
rbegin()
rend()

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={10,20,30};

    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";

    cout<<endl;

    for(auto it=v.rbegin();it!=v.rend();it++)
        cout<<*it<<" ";

    return 0;
}
