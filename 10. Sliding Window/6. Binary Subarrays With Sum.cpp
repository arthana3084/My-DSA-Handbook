/*
==================================================
Problem      : Binary Subarrays With Sum
Platform     : LeetCode 930
Difficulty   : Medium

Pattern      : Sliding Window + At Most K

Time          : O(n)
Space         : O(1)

Key Idea
---------
Exactly(k) = AtMost(k) - AtMost(k-1)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int atMost(vector<int>& nums,int goal)
    {
        if(goal<0)
            return 0;

        int left=0,sum=0,ans=0;

        for(int right=0;right<nums.size();right++)
        {
            sum+=nums[right];

            while(sum>goal)
                sum-=nums[left++];

            ans+=right-left+1;
        }

        return ans;
    }

    int numSubarraysWithSum(vector<int>& nums,int goal)
    {
        return atMost(nums,goal)-atMost(nums,goal-1);
    }
};

int main()
{
    vector<int> nums={1,0,1,0,1};

    Solution obj;

    cout<<obj.numSubarraysWithSum(nums,2);

    return 0;
}
