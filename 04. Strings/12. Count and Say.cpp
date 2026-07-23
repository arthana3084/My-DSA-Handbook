/*
==================================================
Problem      : Count and Say
Platform     : LeetCode 38
Difficulty   : Medium

Pattern      : Simulation

Time          : O(n * length)
Space         : O(length)

Key Idea
---------
Read consecutive digits and build next string.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n)
{
    string ans="1";

    while(--n)
    {
        string temp="";

        for(int i=0;i<ans.size();)
        {
            int j=i;

            while(j<ans.size() && ans[j]==ans[i])
                j++;

            temp+=to_string(j-i);
            temp+=ans[i];

            i=j;
        }

        ans=temp;
    }

    return ans;
}

int main()
{
    cout<<countAndSay(5);

    return 0;
}
