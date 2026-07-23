/*
==================================================
Problem      : Longest Palindromic Substring
Platform     : LeetCode 5
Difficulty   : Medium

Pattern      : Expand Around Center

Time          : O(n²)
Space         : O(1)

Key Idea
---------
Expand from every character and every gap.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{
    int start=0,maxLen=1,n=s.size();

    auto expand=[&](int l,int r)
    {
        while(l>=0 && r<n && s[l]==s[r])
        {
            if(r-l+1>maxLen)
            {
                start=l;
                maxLen=r-l+1;
            }
            l--;
            r++;
        }
    };

    for(int i=0;i<n;i++)
    {
        expand(i,i);
        expand(i,i+1);
    }

    return s.substr(start,maxLen);
}

int main()
{
    cout<<longestPalindrome("babad");

    return 0;
}
