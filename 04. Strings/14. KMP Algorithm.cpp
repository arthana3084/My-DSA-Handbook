/*
==================================================
Problem      : KMP Algorithm
Platform     : Standard

Difficulty   : Hard

Pattern      : String Matching

Time          : O(n+m)
Space         : O(m)

Key Idea
---------
Build LPS array and avoid unnecessary comparisons.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> computeLPS(string pat)
{
    int m=pat.size();

    vector<int> lps(m,0);

    int len=0,i=1;

    while(i<m)
    {
        if(pat[i]==pat[len])
            lps[i++]=++len;
        else
        {
            if(len)
                len=lps[len-1];
            else
                lps[i++]=0;
        }
    }

    return lps;
}

vector<int> KMPSearch(string txt,string pat)
{
    vector<int> ans;

    vector<int> lps=computeLPS(pat);

    int i=0,j=0;

    while(i<txt.size())
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
        }

        if(j==pat.size())
        {
            ans.push_back(i-j);
            j=lps[j-1];
        }
        else if(i<txt.size() && txt[i]!=pat[j])
        {
            if(j)
                j=lps[j-1];
            else
                i++;
        }
    }

    return ans;
}

int main()
{
    vector<int> ans=KMPSearch("ababcabcabababd","ababd");

    for(int x:ans)
        cout<<x<<" ";

    return 0;
}
