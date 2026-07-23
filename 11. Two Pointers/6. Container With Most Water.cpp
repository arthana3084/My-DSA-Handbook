/*
==================================================
Problem      : Container With Most Water
Platform     : LeetCode 11

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

    int maxArea(vector<int>& height)
    {
        int left=0,right=height.size()-1;
        int ans=0;

        while(left<right)
        {
            ans=max(ans,
                    min(height[left],height[right])*(right-left));

            if(height[left]<height[right])
                left++;
            else
                right--;
        }

        return ans;
    }
};

int main()
{
    return 0;
}