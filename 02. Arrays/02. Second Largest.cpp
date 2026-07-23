/*
==================================================
Problem      : Second Largest Element in an Array
Platform     : LeetCode / GFG
Difficulty   : Easy

Pattern      : Array Traversal

Time          : O(n)
Space         : O(1)

Key Idea
---------
Maintain the largest and second largest elements while traversing.

Status : ⭐ Must Revise
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr)
{
    int largest = INT_MIN;
    int second = INT_MIN;

    for(int x : arr)
    {
        if(x > largest)
        {
            second = largest;
            largest = x;
        }
        else if(x > second && x != largest)
        {
            second = x;
        }
    }

    return second;
}

int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};

    cout << secondLargest(arr);

    return 0;
}
