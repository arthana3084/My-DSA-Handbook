/*
==================================================
Problem      : Check if Array is Sorted
Platform     : LeetCode / GFG
Difficulty   : Easy

Pattern      : Array Traversal

Time          : O(n)
Space         : O(1)

Key Idea
---------
If any element is smaller than its previous element,
the array is not sorted.

Status : ⭐ Must Revise
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr)
{
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] < arr[i - 1])
            return false;
    }

    return true;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << isSorted(arr);

    return 0;
}
