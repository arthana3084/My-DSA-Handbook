/*
==================================================
Problem      : Union of Two Sorted Arrays
Platform     : GFG

Difficulty   : Easy

Pattern      : Two Pointers

Time          : O(n + m)
Space         : O(n + m)

Key Idea
---------
Traverse both arrays simultaneously while avoiding
duplicate insertions.

Status : ⭐ Must Revise
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>& a, vector<int>& b)
{
    int i = 0, j = 0;
    vector<int> ans;

    while(i < a.size() && j < b.size())
    {
        if(a[i] <= b[j])
        {
            if(ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
        }
        else
        {
            if(ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++;
        }
    }

    while(i < a.size())
    {
        if(ans.empty() || ans.back() != a[i])
            ans.push_back(a[i]);
        i++;
    }

    while(j < b.size())
    {
        if(ans.empty() || ans.back() != b[j])
            ans.push_back(b[j]);
        j++;
    }

    return ans;
}

int main()
{
    vector<int> a = {1,2,2,3,4};
    vector<int> b = {2,3,5};

    vector<int> ans = unionArray(a,b);

    for(int x:ans)
        cout<<x<<" ";

    return 0;
}
