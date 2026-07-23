/*
==================================================
Problem      : 3Sum
Platform     : LeetCode 15

Difficulty   : Medium

Pattern      : Sorting + Two Pointers

Time          : O(n²)
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

    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());

        vector<vector<int>> ans;

        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;

            int left=i+1;
            int right=nums.size()-1;

            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];

                if(sum<0)
                    left++;

                else if(sum>0)
                    right--;

                else
                {
                    ans.push_back({nums[i],nums[left],nums[right]});

                    left++;
                    right--;

                    while(left<right && nums[left]==nums[left-1])
                        left++;

                    while(left<right && nums[right]==nums[right+1])
                        right--;
                }
            }
        }

        return ans;
    }
};

int main()
{
    return 0;
}