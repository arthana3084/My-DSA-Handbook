/*
==================================================
Problem      : Partition Labels
Platform     : LeetCode 763

Difficulty   : Medium

Pattern      : Greedy

Time          : O(n)
Space         : O(1)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    vector<int> partitionLabels(string s)
    {
        vector<int> last(26);

        for(int i=0;i<s.size();i++)
            last[s[i]-'a']=i;

        vector<int> ans;

        int start=0,end=0;

        for(int i=0;i<s.size();i++)
        {
            end=max(end,last[s[i]-'a']);

            if(i==end)
            {
                ans.push_back(end-start+1);
                start=i+1;
            }
        }

        return ans;
    }
};

int main()
{
    return 0;
}