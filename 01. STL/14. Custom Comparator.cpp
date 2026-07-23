/*
==================================================
Custom Comparator

Used for custom sorting.

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b)
{
    return a>b;
}

int main()
{
    vector<int> v={4,2,5,1,3};

    sort(v.begin(),v.end(),comp);

    for(int x:v)
        cout<<x<<" ";

    return 0;
}
