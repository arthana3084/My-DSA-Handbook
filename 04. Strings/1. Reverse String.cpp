/*
==================================================
Problem      : Reverse String
Platform     : LeetCode 344
Difficulty   : Easy

Pattern      : Two Pointers

Time          : O(n)
Space         : O(1)

Key Idea
---------
Swap characters from both ends.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s)
{
    int left=0,right=s.size()-1;

    while(left<right)
    {
        swap(s[left],s[right]);
        left++;
        right--;
    }
}

int main()
{
    vector<char> s={'h','e','l','l','o'};

    reverseString(s);

    for(char c:s)
        cout<<c;

    return 0;
}
