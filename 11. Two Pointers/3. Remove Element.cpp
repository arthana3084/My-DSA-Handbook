/*
==================================================
Problem      : Remove Element
Platform     : LeetCode 27

Difficulty   : Easy

Pattern      : Two Pointers

Time          : O(n)
Space         : O(1)
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int removeElement(vector<int>& nums,int val)
    {
        int k=0;

        for(int x:nums)
        {
            if(x!=val)
                nums[k++]=x;
        }

        return k;
    }
};

int main()
{
    return 0;
}