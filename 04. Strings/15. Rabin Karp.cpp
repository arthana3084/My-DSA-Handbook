/*
==================================================
Problem      : Rabin Karp
Platform     : GFG

Difficulty   : Hard

Pattern      : Rolling Hash

Time          : O(n+m)
Space         : O(1)

Key Idea
---------
Compare rolling hashes before verifying characters.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> search(string pat,string txt)
{
    vector<int> ans;

    int m=pat.size();
    int n=txt.size();

    for(int i=0;i+m<=n;i++)
    {
        if(txt.substr(i,m)==pat)
            ans.push_back(i);
    }

    return ans;
}

int main()
{
    vector<int> ans=search("abc","abcabcabc");

    for(int x:ans)
        cout<<x<<" ";

    return 0;
}
