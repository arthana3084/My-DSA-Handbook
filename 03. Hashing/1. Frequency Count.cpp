/*
==================================================
Problem      : Frequency Count
Platform     : GFG
Difficulty   : Easy

Pattern      : Hashing

Time          : O(n)
Space         : O(n)

Key Idea
---------
Store frequencies using unordered_map.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={1,2,2,3,1,4,2};

    unordered_map<int,int> freq;

    for(int x:arr)
        freq[x]++;

    for(auto it:freq)
        cout<<it.first<<" "<<it.second<<endl;

    return 0;
}
