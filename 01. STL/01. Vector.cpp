/*
==================================================
STL Topic : Vector

Description
-----------
Dynamic array.

Important Functions
-------------------
push_back()
pop_back()
size()
empty()
clear()
front()
back()
begin()
end()
insert()
erase()
resize()
swap()

Time Complexity
---------------
Access            O(1)
push_back         O(1)
Insert            O(n)
Erase             O(n)

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3};

    v.push_back(4);
    v.pop_back();

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.size()<<endl;

    for(auto x:v)
        cout<<x<<" ";

    return 0;
}
