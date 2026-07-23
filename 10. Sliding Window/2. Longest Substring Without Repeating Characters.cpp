/*
==================================================
Problem      : Longest Substring Without Repeating Characters
Platform     : LeetCode 3
Difficulty   : Medium

Pattern      : Variable Sliding Window

Time          : O(n)
Space         : O(256)

Key Idea
---------
Shrink the window until all characters
become unique.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int lengthOfLongestSubstring(string s)
    {
        vector<int> last(256,-1);

        int left=0;
        int ans=0;

        for(int right=0;right<s.size();right++)
        {
            if(last[s[right]]>=left)
                left=last[s[right]]+1;

            last[s[right]]=right;

            ans=max(ans,right-left+1);
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    cout<<obj.lengthOfLongestSubstring("abcabcbb");

    return 0;
}
