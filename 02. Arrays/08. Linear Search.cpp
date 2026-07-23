/*
==================================================
Problem      : Linear Search
Platform     : Basic

Difficulty   : Easy

Pattern      : Array Traversal

Time          : O(n)
Space         : O(1)

Key Idea
---------
Traverse the array and compare every element.

Status : ⭐ Must Revise
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int target)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == target)
            return i;
    }

    return -1;
}

int main()
{
    vector<int> arr = {2,4,6,8,10};

    cout<<linearSearch(arr,8);

    return 0;
}
