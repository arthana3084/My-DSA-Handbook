/*
==================================================
Problem      : Longest Common Prefix
Platform     : LeetCode 14
Difficulty   : Easy

Pattern      : String Comparison

Time          : O(n*m)
Space         : O(1)

Key Idea
---------
Compare every string with the first one.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    sort(strs.begin(),strs.end());

    string first=strs.front();
    string last=strs.back();

    string ans="";

    for(int i=0;i<min(first.size(),last.size());i++)
    {
        if(first[i]!=last[i])
            break;

        ans+=first[i];
    }

    return ans;
}

int main()
{
    vector<string> strs={"flower","flow","flight"};

    cout<<longestCommonPrefix(strs);

    return 0;
}
