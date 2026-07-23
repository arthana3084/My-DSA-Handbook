/*
==================================================
Problem      : Roman to Integer
Platform     : LeetCode 13
Difficulty   : Easy

Pattern      : String

Time          : O(n)
Space         : O(1)

Key Idea
---------
If next numeral is larger, subtract current value.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char,int> mp={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };

    int ans=0;

    for(int i=0;i<s.size();i++)
    {
        if(i+1<s.size() && mp[s[i]]<mp[s[i+1]])
            ans-=mp[s[i]];
        else
            ans+=mp[s[i]];
    }

    return ans;
}

int main()
{
    cout<<romanToInt("MCMXCIV");

    return 0;
}
