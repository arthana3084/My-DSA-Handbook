/*
==================================================
Problem      : Left Rotate Array by D Places
Platform     : LeetCode / GFG
Difficulty   : Easy

Pattern      : Reversal Algorithm

Time          : O(n)
Space         : O(1)

Key Idea
---------
Reverse first D elements, reverse remaining elements,
then reverse the entire array.

Status : ⭐ Must Revise
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &arr, int d)
{
    int n = arr.size();
    d %= n;

    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};

    leftRotate(arr,3);

    for(int x:arr)
        cout<<x<<" ";

    return 0;
}
