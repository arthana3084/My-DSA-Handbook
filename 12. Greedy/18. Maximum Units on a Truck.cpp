/*
==================================================
Problem      : Maximum Units on a Truck
Platform     : LeetCode 1710

Difficulty   : Easy

Pattern      : Greedy + Sorting

Time          : O(n log n)
Space         : O(1)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int maximumUnits(vector<vector<int>>& boxTypes,int truckSize)
    {
        sort(boxTypes.begin(),boxTypes.end(),
        [](vector<int>& a,vector<int>& b)
        {
            return a[1]>b[1];
        });

        int ans=0;

        for(auto &box:boxTypes)
        {
            int take=min(truckSize,box[0]);

            ans+=take*box[1];

            truckSize-=take;

            if(truckSize==0)
                break;
        }

        return ans;
    }
};

int main()
{
    return 0;
}