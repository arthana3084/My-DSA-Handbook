/*
==================================================
Problem      : Hand of Straights
Platform     : LeetCode 846

Difficulty   : Medium

Pattern      : Greedy + Ordered Map

Time          : O(n log n)
Space         : O(n)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    bool isNStraightHand(vector<int>& hand,int groupSize)
    {
        if(hand.size()%groupSize)
            return false;

        map<int,int> mp;

        for(int x:hand)
            mp[x]++;

        while(!mp.empty())
        {
            int start=mp.begin()->first;

            for(int i=0;i<groupSize;i++)
            {
                if(mp.find(start+i)==mp.end())
                    return false;

                mp[start+i]--;

                if(mp[start+i]==0)
                    mp.erase(start+i);
            }
        }

        return true;
    }
};

int main()
{
    return 0;
}