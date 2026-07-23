/*
==================================================
Problem      : Left Rotate Array by One Place
Platform     : GFG
Difficulty   : Easy

Pattern      : Array Manipulation

Time          : O(n)
Space         : O(1)

Key Idea
---------
Store the first element, shift remaining elements
left by one, and place the first element at the end.

Status : ⭐ Must Revise
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(vector<int> &arr)
{
    int temp = arr[0];

    for(int i = 1; i < arr.size(); i++)
        arr[i - 1] = arr[i];

    arr[arr.size() - 1] = temp;
}

int main()
{
    vector<int> arr = {1,2,3,4,5};

    leftRotateByOne(arr);

    for(int x : arr)
        cout << x << " ";

    return 0;
}
