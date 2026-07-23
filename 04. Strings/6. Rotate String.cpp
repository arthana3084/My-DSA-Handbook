/*
==================================================
Problem      : Rotate String
Platform     : LeetCode 796
Difficulty   : Easy

Pattern      : String

Time          : O(n)
Space         : O(n)

Key Idea
---------
Check if goal exists in s+s.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal)
{
    if(s.size()!=goal.size())
        return false;

    return (s+s).find(goal)!=string::npos;
}

int main()
{
    cout<<rotateString("abcde","cdeab");

    return 0;
}
