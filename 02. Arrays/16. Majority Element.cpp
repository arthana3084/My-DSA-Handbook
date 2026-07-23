/*
==================================================
Problem      : Majority Element
Platform     : LeetCode 169
Difficulty   : Easy

Pattern      : Moore's Voting Algorithm

Time          : O(n)
Space         : O(1)

Key Idea
---------
Maintain a candidate and its count.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int cnt = 0;
    int ele = 0;

    for(int x : nums)
    {
        if(cnt == 0)
        {
            ele = x;
            cnt = 1;
        }
        else if(ele == x)
            cnt++;
        else
            cnt--;
    }

    return ele;
}

int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << majorityElement(nums);

    return 0;
}
