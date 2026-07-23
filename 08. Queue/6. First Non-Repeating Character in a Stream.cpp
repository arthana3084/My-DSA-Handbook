/*
==================================================
Problem      : First Non-Repeating Character in Stream
Platform     : GFG

Difficulty   : Medium

Pattern      : Queue + Frequency

Time          : O(n)
Space         : O(26)

Key Idea
---------
Maintain queue of candidate characters.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string A)
{
    vector<int> freq(26,0);

    queue<char> q;

    string ans="";

    for(char c:A)
    {
        freq[c-'a']++;

        q.push(c);

        while(!q.empty() && freq[q.front()-'a']>1)
            q.pop();

        ans+=q.empty()?'#':q.front();
    }

    return ans;
}

int main()
{
    cout<<FirstNonRepeating("aabc");

    return 0;
}
