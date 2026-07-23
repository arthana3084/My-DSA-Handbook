/*
==================================================
Problem      : Valid Parenthesis String
Platform     : LeetCode 678

Difficulty   : Medium

Pattern      : Greedy

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

    bool checkValidString(string s)
    {
        int low = 0, high = 0;

        for(char c : s)
        {
            if(c == '(')
            {
                low++;
                high++;
            }
            else if(c == ')')
            {
                low--;
                high--;
            }
            else
            {
                low--;
                high++;
            }

            if(high < 0)
                return false;

            low = max(low, 0);
        }

        return low == 0;
    }
};

int main()
{
    return 0;
}