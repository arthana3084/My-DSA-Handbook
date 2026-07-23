/*
==================================================
Problem      : Fruits Into Baskets
Platform     : LeetCode 904
Difficulty   : Medium

Pattern      : Variable Sliding Window

Time          : O(n)
Space         : O(1)

Key Idea
---------
Maintain at most two distinct fruit types.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int totalFruit(vector<int>& fruits)
    {
        unordered_map<int,int> mp;

        int left=0;
        int ans=0;

        for(int right=0;right<fruits.size();right++)
        {
            mp[fruits[right]]++;

            while(mp.size()>2)
            {
                mp[fruits[left]]--;

                if(mp[fruits[left]]==0)
                    mp.erase(fruits[left]);

                left++;
            }

            ans=max(ans,right-left+1);
        }

        return ans;
    }
};

int main()
{
    vector<int> fruits={1,2,1};

    Solution obj;

    cout<<obj.totalFruit(fruits);

    return 0;
}
