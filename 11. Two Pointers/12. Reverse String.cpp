/*
==================================================
Problem      : Reverse String
Platform     : LeetCode 344

Difficulty   : Easy

Pattern       : Two Pointers

Time          : O(n)
Space         : O(1)
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

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
};

int main()
{
    return 0;
}