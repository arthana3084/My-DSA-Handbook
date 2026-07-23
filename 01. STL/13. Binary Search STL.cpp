/*
==================================================
Binary Search Functions

binary_search()

lower_bound()

upper_bound()

equal_range()

Works only on sorted containers.

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,2,3,4,5};

    cout<<binary_search(v.begin(),v.end(),2)<<endl;

    cout<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;

    cout<<upper_bound(v.begin(),v.end(),2)-v.begin();

    return 0;
}
