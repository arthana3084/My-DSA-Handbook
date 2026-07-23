/*
==================================================
Problem      : Valid Palindrome
Platform     : LeetCode 125

Difficulty   : Easy

Pattern       : Two Pointers

Time          : O(n)
Space         : O(1)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    bool isPalindrome(string s)
    {
        int left=0,right=s.size()-1;

        while(left<right)
        {
            while(left<right && !isalnum(s[left]))
                left++;

            while(left<right && !isalnum(s[right]))
                right--;

            if(tolower(s[left])!=tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};

int main()
{
    return 0;
}