/*
==================================================
Problem      : Letter Combinations of Phone Number
Platform     : LeetCode 17
Difficulty   : Medium

Pattern      : Backtracking

Time          : O(4^n)
Space         : O(n)

Key Idea
---------
Choose one character for every digit.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<string> ans;

    vector<string> mp={
        "","","abc","def","ghi","jkl",
        "mno","pqrs","tuv","wxyz"
    };

    void solve(int idx,string digits,string cur)
    {
        if(idx==digits.size())
        {
            ans.push_back(cur);
            return;
        }

        for(char c:mp[digits[idx]-'0'])
            solve(idx+1,digits,cur+c);
    }

    vector<string> letterCombinations(string digits)
    {
        if(digits.empty())
            return {};

        solve(0,digits,"");

        return ans;
    }
};
