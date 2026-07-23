/*
==================================================
Problem      : Print All Subsequences
Platform     : Basic
Difficulty   : Easy

Pattern      : Pick / Not Pick

Time          : O(2^n)
Space         : O(n)

Key Idea
---------
At every index either take or don't take.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

void solve(int idx,vector<int>& arr,vector<int>& ds)
{
    if(idx==arr.size())
    {
        for(int x:ds)
            cout<<x<<" ";

        cout<<endl;
        return;
    }

    ds.push_back(arr[idx]);
    solve(idx+1,arr,ds);

    ds.pop_back();
    solve(idx+1,arr,ds);
}

int main()
{
    vector<int> arr={1,2,3};
    vector<int> ds;

    solve(0,arr,ds);

    return 0;
}
