/*
==================================================
Problem      : Isomorphic Strings
Platform     : LeetCode 205
Difficulty   : Easy

Pattern      : Hashing

Time          : O(n)
Space         : O(1)

Key Idea
---------
Maintain two-way character mapping.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s,string t)
{
    vector<int> mapS(256,-1);
    vector<int> mapT(256,-1);

    for(int i=0;i<s.size();i++)
    {
        if(mapS[s[i]]!=mapT[t[i]])
            return false;

        mapS[s[i]]=i;
        mapT[t[i]]=i;
    }

    return true;
}

int main()
{
    cout<<isIsomorphic("egg","add");

    return 0;
}
