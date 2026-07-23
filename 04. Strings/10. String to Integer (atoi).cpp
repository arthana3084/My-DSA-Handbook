/*
==================================================
Problem      : String to Integer (atoi)
Platform     : LeetCode 8
Difficulty   : Medium

Pattern      : String

Time          : O(n)
Space         : O(1)

Key Idea
---------
Handle spaces, sign, digits and overflow.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    int i=0,n=s.size();

    while(i<n && s[i]==' ')
        i++;

    int sign=1;

    if(i<n && (s[i]=='+'||s[i]=='-'))
    {
        if(s[i]=='-')
            sign=-1;
        i++;
    }

    long long ans=0;

    while(i<n && isdigit(s[i]))
    {
        ans=ans*10+(s[i]-'0');

        if(sign*ans>INT_MAX)
            return INT_MAX;

        if(sign*ans<INT_MIN)
            return INT_MIN;

        i++;
    }

    return sign*ans;
}

int main()
{
    cout<<myAtoi("   -42");

    return 0;
}
