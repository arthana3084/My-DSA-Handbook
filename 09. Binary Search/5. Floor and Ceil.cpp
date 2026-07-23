/*
==================================================
Problem      : Floor and Ceil
Platform     : GFG

Difficulty   : Easy

Pattern      : Binary Search

Time          : O(log n)
Space         : O(1)

Key Idea
---------
Binary search while tracking floor and ceil.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

pair<int,int> getFloorAndCeil(vector<int>& arr,int x)
{
    int floor=-1,ceil=-1;

    int low=0,high=arr.size()-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==x)
            return {x,x};

        if(arr[mid]<x)
        {
            floor=arr[mid];
            low=mid+1;
        }
        else
        {
            ceil=arr[mid];
            high=mid-1;
        }
    }

    return {floor,ceil};
}

int main()
{
    vector<int> arr={1,2,4,6,10};

    auto ans=getFloorAndCeil(arr,5);

    cout<<"Floor = "<<ans.first<<endl;
    cout<<"Ceil = "<<ans.second;
}
