/*
==================================================
Problem      : Valid Anagram
Platform     : LeetCode 242
Difficulty   : Easy

Pattern      : Hashing

Time          : O(n)
Space         : O(1)

Key Idea
---------
Count frequency of every character.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s,string t)
{
    if(s.size()!=t.size())
        return false;

    vector<int> freq(26,0);

    for(char c:s)
        freq[c-'a']++;

    for(char c:t)
    {
        freq[c-'a']--;

        if(freq[c-'a']<0)
            return false;
    }

    return true;
}

int main()
{
    cout<<isAnagram("anagram","nagaram");

    return 0;
}
