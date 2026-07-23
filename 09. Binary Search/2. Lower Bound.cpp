/*
==================================================
Problem      : Lower Bound
Platform     : STL

Difficulty   : Easy

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
First element greater than or equal to target.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr,int x)
{
    int low=0,high=arr.size()-1;
    int ans=arr.size();

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }

    return ans;
}

int main()
{
    vector<int> arr={1,2,4,4,5,6};

    cout<<lowerBound(arr,4);
}
