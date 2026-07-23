/*
==================================================
Problem      : Longest Subarray with Sum K
Platform     : GFG
Difficulty   : Medium

Pattern      : Prefix Sum + Hashing

Time          : O(n)
Space         : O(n)

Key Idea
---------
Store prefix sums in a hashmap.

Status : ⭐ Must Revise
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int k)
{
    unordered_map<int,int> mp;

    int sum = 0;
    int maxi = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if(sum == k)
            maxi = i + 1;

        if(mp.find(sum - k) != mp.end())
            maxi = max(maxi, i - mp[sum - k]);

        if(mp.find(sum) == mp.end())
            mp[sum] = i;
    }

    return maxi;
}

int main()
{
    vector<int> arr = {1,2,3,1,1,1,1};

    cout << longestSubarray(arr, 3);

    return 0;
}
