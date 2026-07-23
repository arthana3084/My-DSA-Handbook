/*
==================================================
Problem      : Two Sum II - Input Array is Sorted
Platform     : LeetCode 167

Difficulty   : Medium

Pattern      : Two Pointers

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

    vector<int> twoSum(vector<int>& numbers,int target)
    {
        int left=0,right=numbers.size()-1;

        while(left<right)
        {
            int sum=numbers[left]+numbers[right];

            if(sum==target)
                return {left+1,right+1};

            if(sum<target)
                left++;
            else
                right--;
        }

        return {};
    }
};

int main()
{
    return 0;
}