/*
==================================================
Problem      : Asteroid Collision
Platform     : LeetCode 735
Difficulty   : Medium

Pattern      : Stack

Time          : O(n)
Space         : O(n)

Key Idea
---------
Simulate collisions using stack.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids)
{
    stack<int> st;

    for(int a:asteroids)
    {
        bool destroyed=false;

        while(!st.empty() && a<0 && st.top()>0)
        {
            if(st.top()<-a)
            {
                st.pop();
                continue;
            }

            if(st.top()==-a)
                st.pop();

            destroyed=true;
            break;
        }

        if(!destroyed)
            st.push(a);
    }

    vector<int> ans(st.size());

    for(int i=st.size()-1;i>=0;i--)
    {
        ans[i]=st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    vector<int> arr={5,10,-5};

    vector<int> ans=asteroidCollision(arr);

    for(int x:ans)
        cout<<x<<" ";

    return 0;
}
