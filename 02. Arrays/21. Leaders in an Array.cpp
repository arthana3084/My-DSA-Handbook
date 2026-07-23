/*
==================================================
Problem      : Leaders in an Array
Platform     : GFG
Difficulty   : Medium

Pattern      : Reverse Traversal

Time          : O(n)
Space         : O(n)

Key Idea
---------
Traverse from right while maintaining the maximum element.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr)
{
    vector<int> ans;

    int maxi = INT_MIN;

    for(int i = arr.size()-1; i >= 0; i--)
    {
        if(arr[i] > maxi)
        {
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<int> arr = {10,22,12,3,0,6};

    vector<int> ans = leaders(arr);

    for(int x:ans)
        cout<<x<<" ";

    return 0;
}
