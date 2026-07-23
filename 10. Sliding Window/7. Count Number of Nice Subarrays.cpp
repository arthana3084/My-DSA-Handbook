/*
==================================================
Problem      : Count Number of Nice Subarrays
Platform     : LeetCode 1248
Difficulty   : Medium

Pattern      : Sliding Window + At Most K

Time          : O(n)
Space         : O(1)

Key Idea
---------
Convert odd count to At Most K problem.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int atMost(vector<int>& nums,int k)
    {
        if(k<0)
            return 0;

        int left=0,odd=0,ans=0;

        for(int right=0;right<nums.size();right++)
        {
            odd+=nums[right]%2;

            while(odd>k)
                odd-=nums[left++]%2;

            ans+=right-left+1;
        }

        return ans;
    }

    int numberOfSubarrays(vector<int>& nums,int k)
    {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};

int main()
{
    vector<int> nums={1,1,2,1,1};

    Solution obj;

    cout<<obj.numberOfSubarrays(nums,3);

    return 0;
}
