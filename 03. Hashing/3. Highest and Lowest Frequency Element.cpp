/*
==================================================
Problem      : Highest and Lowest Frequency Element
Platform     : Coding Ninjas

Difficulty   : Easy

Pattern      : Hashing

Time          : O(n)
Space         : O(n)

Key Idea
---------
Build frequency map then traverse once.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={1,2,2,3,3,3,4};

    unordered_map<int,int> mp;

    for(int x:arr)
        mp[x]++;

    int maxEle,minEle;
    int maxFreq=INT_MIN,minFreq=INT_MAX;

    for(auto it:mp)
    {
        if(it.second>maxFreq)
        {
            maxFreq=it.second;
            maxEle=it.first;
        }

        if(it.second<minFreq)
        {
            minFreq=it.second;
            minEle=it.first;
        }
    }

    cout<<"Highest : "<<maxEle<<endl;
    cout<<"Lowest : "<<minEle;
}
