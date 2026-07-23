/*
==================================================
Problem      : Largest Element in an Array
Platform     : LeetCode / GFG
Difficulty   : Easy

Pattern      : Array Traversal

Time          : O(n)
Space         : O(1)

Key Idea
---------
Traverse the array once while keeping track of the maximum element.

Status : ⭐ Must Revise
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr)
{
    int maxi = arr[0];

    for(int i = 1; i < arr.size(); i++)
        maxi = max(maxi, arr[i]);

    return maxi;
}

int main()
{
    vector<int> arr = {2, 5, 1, 3, 0};

    cout << largestElement(arr);

    return 0;
}
