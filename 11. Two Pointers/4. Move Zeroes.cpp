/*
==================================================
Problem      : Move Zeroes
Platform     : LeetCode 283

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

    void moveZeroes(vector<int>& nums)
    {
        int j=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                swap(nums[i],nums[j++]);
        }
    }
};

int main()
{
    return 0;
}