/*
==================================================
Important STL Algorithms

sort()

reverse()

find()

count()

max_element()

min_element()

accumulate()

next_permutation()

binary_search()

rotate()

unique()

==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={5,2,7,1};

    sort(v.begin(),v.end());

    reverse(v.begin(),v.end());

    cout<<*max_element(v.begin(),v.end())<<endl;

    cout<<accumulate(v.begin(),v.end(),0);

    return 0;
}
