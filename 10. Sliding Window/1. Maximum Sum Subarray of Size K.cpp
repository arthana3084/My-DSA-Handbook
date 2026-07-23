/*
==================================================
Problem      : Maximum Sum Subarray of Size K
Platform     : GFG
Difficulty   : Easy

Pattern      : Fixed Sliding Window

Time          : O(n)
Space         : O(1)

Key Idea
---------
Expand the window and remove the leftmost
element when the window size exceeds k.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int maximumSumSubarray(vector<int>& arr,int k)
{
    int n=arr.size();

    int sum=0;
    int ans=INT_MIN;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

        if(i>=k)
            sum-=arr[i-k];

        if(i>=k-1)
            ans=max(ans,sum);
    }

    return ans;
}

int main()
{
    vector<int> arr={100,200,300,400};

    cout<<maximumSumSubarray(arr,2);

    return 0;
}
