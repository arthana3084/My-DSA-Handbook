/*
==================================================
Problem      : Koko Eating Bananas
Platform     : LeetCode 875
Difficulty   : Medium

Pattern      : Binary Search on Answer

Time          : O(n log m)
Space         : O(1)

Key Idea
---------
Binary search the eating speed.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>& piles,int h,int speed)
{
    long long hours=0;

    for(int x:piles)
        hours+=(x+speed-1)/speed;

    return hours<=h;
}

int minEatingSpeed(vector<int>& piles,int h)
{
    int low=1;
    int high=*max_element(piles.begin(),piles.end());

    while(low<high)
    {
        int mid=low+(high-low)/2;

        if(possible(piles,h,mid))
            high=mid;
        else
            low=mid+1;
    }

    return low;
}

int main()
{
    vector<int> piles={3,6,7,11};

    cout<<minEatingSpeed(piles,8);

    return 0;
}
