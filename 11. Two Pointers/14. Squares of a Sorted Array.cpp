/*
==================================================
Problem      : Squares of a Sorted Array
Platform     : LeetCode 977

Difficulty   : Easy

Pattern       : Two Pointers

Time          : O(n)
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

    vector<int> sortedSquares(vector<int>& nums)
    {
        int left=0,right=nums.size()-1;
        int idx=nums.size()-1;

        vector<int> ans(nums.size());

        while(left<=right)
        {
            if(abs(nums[left])>abs(nums[right]))
                ans[idx--]=nums[left]*nums[left++];
            else
                ans[idx--]=nums[right]*nums[right--];
        }

        return ans;
    }
};

int main()
{
    return 0;
}