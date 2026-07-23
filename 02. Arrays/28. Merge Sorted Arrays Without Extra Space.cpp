/*
==================================================
Problem      : Merge Sorted Arrays Without Extra Space
Platform     : LeetCode 88 / GFG

Difficulty   : Medium

Pattern      : Gap Method

Time          : O((n+m)log(n+m))
Space         : O(1)

Key Idea
---------
Compare elements at a fixed gap and reduce the gap.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1,int m,vector<int>& nums2,int n)
{
    for(int i=0;i<n;i++)
        nums1[m+i]=nums2[i];

    sort(nums1.begin(),nums1.end());
}

int main()
{
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};

    merge(nums1,3,nums2,3);

    for(int x:nums1)
        cout<<x<<" ";

    return 0;
}
