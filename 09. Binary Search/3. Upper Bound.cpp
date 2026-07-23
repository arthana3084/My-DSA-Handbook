/*
==================================================
Problem      : Upper Bound
Platform     : STL

Difficulty   : Easy

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
First element strictly greater than target.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>& arr,int x)
{
    int low=0,high=arr.size()-1;
    int ans=arr.size();

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]>x)
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

    cout<<upperBound(arr,4);
}
