/*
==================================================
Problem      : Permutation in String
Platform     : LeetCode 567
Difficulty   : Medium

Pattern      : Fixed Sliding Window

Time          : O(n)
Space         : O(26)

Key Idea
---------
Maintain frequency arrays for window.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool checkInclusion(string s1,string s2)
    {
        vector<int> a(26,0),b(26,0);

        for(char c:s1)
            a[c-'a']++;

        int k=s1.size();

        for(int i=0;i<s2.size();i++)
        {
            b[s2[i]-'a']++;

            if(i>=k)
                b[s2[i-k]-'a']--;

            if(a==b)
                return true;
        }

        return false;
    }
};

int main()
{
    Solution obj;

    cout<<obj.checkInclusion("ab","eidbaooo");

    return 0;
}
