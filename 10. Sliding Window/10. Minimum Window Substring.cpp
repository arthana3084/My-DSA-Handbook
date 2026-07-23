/*
==================================================
Problem      : Minimum Window Substring
Platform     : LeetCode 76
Difficulty   : Hard

Pattern      : Variable Sliding Window

Time          : O(n)
Space         : O(128)

Key Idea
---------
Expand until valid, then shrink.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    string minWindow(string s,string t)
    {
        vector<int> freq(128,0);

        for(char c:t)
            freq[c]++;

        int left=0,count=t.size();

        int start=0,len=INT_MAX;

        for(int right=0;right<s.size();right++)
        {
            if(freq[s[right]]-- >0)
                count--;

            while(count==0)
            {
                if(right-left+1<len)
                {
                    len=right-left+1;
                    start=left;
                }

                if(++freq[s[left]]>0)
                    count++;

                left++;
            }
        }

        return len==INT_MAX?"":s.substr(start,len);
    }
};

int main()
{
    Solution obj;

    cout<<obj.minWindow("ADOBECODEBANC","ABC");

    return 0;
}
