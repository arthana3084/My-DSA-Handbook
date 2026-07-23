/*
==================================================
Problem      : Allocate Minimum Pages
Platform     : GFG
Difficulty   : Hard

Pattern      : Binary Search on Answer

Time          : O(n log(sum))
Space         : O(1)

Key Idea
---------
Binary search the maximum pages assigned.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int>& arr,int students,int pages)
{
    int count=1;
    int sum=0;

    for(int x:arr)
    {
        if(x>pages)
            return false;

        if(sum+x<=pages)
            sum+=x;
        else
        {
            count++;
            sum=x;
        }
    }

    return count<=students;
}

int findPages(vector<int>& arr,int students)
{
    if(students>arr.size())
        return -1;

    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);

    while(low<high)
    {
        int mid=low+(high-low)/2;

        if(possible(arr,students,mid))
            high=mid;
        else
            low=mid+1;
    }

    return low;
}

int main()
{
    vector<int> arr={12,34,67,90};

    cout<<findPages(arr,2);

    return 0;
}
