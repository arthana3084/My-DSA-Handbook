/*
==================================================
Problem      : Largest Odd Number in String
Platform     : LeetCode 1903
Difficulty   : Easy

Pattern      : String Traversal

Time          : O(n)
Space         : O(1)

Key Idea
---------
Find the last odd digit.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num)
{
    for(int i=num.size()-1;i>=0;i--)
    {
        if((num[i]-'0')%2)
            return num.substr(0,i+1);
    }

    return "";
}

int main()
{
    cout<<largestOddNumber("35427");

    return 0;
}
