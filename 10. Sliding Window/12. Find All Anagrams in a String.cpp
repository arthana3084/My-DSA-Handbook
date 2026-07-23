/*
==================================================
Problem      : Find All Anagrams in a String
Platform     : LeetCode 438
Difficulty   : Medium

Pattern      : Fixed Sliding Window

Time          : O(n)
Space         : O(26)

Key Idea
---------
Same idea as Permutation in String,
but store every valid starting index.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> findAnagrams(string s,string p)
    {
        vector<int> need(26,0),have(26,0),ans;

        for(char c:p)
            need[c-'a']++;

        int k=p.size();

        for(int i=0;i<s.size();i++)
        {
            have[s[i]-'a']++;

            if(i>=k)
                have[s[i-k]-'a']--;

            if(need==have)
                ans.push_back(i-k+1);
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> ans=obj.findAnagrams("cbaebabacd","abc");

    for(int x:ans)
        cout<<x<<" ";
}
