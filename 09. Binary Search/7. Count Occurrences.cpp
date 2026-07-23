/*
==================================================
Problem      : Count Occurrences
Platform     : GFG
Difficulty   : Easy

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
Count = Last Occurrence - First Occurrence + 1.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int first(vector<int>& arr,int x)
{
    int low=0,high=arr.size()-1,ans=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]>=x)
        {
            if(arr[mid]==x) ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }

    return ans;
}

int last(vector<int>& arr,int x)
{
    int low=0,high=arr.size()-1,ans=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]<=x)
        {
            if(arr[mid]==x) ans=mid;
            low=mid+1;
        }
        else
            high=mid-1;
    }

    return ans;
}

int count(vector<int>& arr,int x)
{
    int f=first(arr,x);

    if(f==-1) return 0;

    int l=last(arr,x);

    return l-f+1;
}

int main()
{
    vector<int> arr={1,2,2,2,3,4};

    cout<<count(arr,2);
}
