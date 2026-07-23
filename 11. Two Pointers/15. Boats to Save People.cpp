/*
==================================================
Problem      : Boats to Save People
Platform     : LeetCode 881

Difficulty   : Medium

Pattern       : Greedy + Two Pointers

Time          : O(n log n)
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

    int numRescueBoats(vector<int>& people,int limit)
    {
        sort(people.begin(),people.end());

        int left=0,right=people.size()-1;
        int boats=0;

        while(left<=right)
        {
            if(people[left]+people[right]<=limit)
                left++;

            right--;
            boats++;
        }

        return boats;
    }
};

int main()
{
    return 0;
}