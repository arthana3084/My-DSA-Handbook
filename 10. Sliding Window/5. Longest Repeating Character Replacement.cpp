/*
==================================================
Problem      : Longest Repeating Character Replacement
Platform     : LeetCode 424
Difficulty   : Medium

Pattern      : Variable Sliding Window

Time          : O(n)
Space         : O(26)

Key Idea
---------
Window is valid if:
(window size - max frequency <= k)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int characterReplacement(string s,int k)
    {
        vector<int> freq(26,0);

        int left=0;
        int maxFreq=0;
        int ans=0;

        for(int right=0;right<s.size();right++)
        {
            maxFreq=max(maxFreq,++freq[s[right]-'A']);

            while((right-left+1)-maxFreq>k)
            {
                freq[s[left]-'A']--;
                left++;
            }

            ans=max(ans,right-left+1);
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    cout<<obj.characterReplacement("AABABBA",1);

    return 0;
}
