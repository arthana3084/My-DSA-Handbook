/*
==================================================
Problem      : Maximal Rectangle
Platform     : LeetCode 85
Difficulty   : Hard

Pattern      : Histogram + Stack

Time          : O(rows × cols)
Space         : O(cols)

Key Idea
---------
Treat every row as histogram.

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐☆
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& h)
{
    stack<int> st;
    int ans=0,n=h.size();

    for(int i=0;i<=n;i++)
    {
        while(!st.empty() && (i==n || h[st.top()]>=h[i]))
        {
            int ht=h[st.top()];
            st.pop();

            int width=st.empty()?i:i-st.top()-1;

            ans=max(ans,ht*width);
        }

        st.push(i);
    }

    return ans;
}

int maximalRectangle(vector<vector<char>>& matrix)
{
    if(matrix.empty())
        return 0;

    int m=matrix.size();
    int n=matrix[0].size();

    vector<int> height(n,0);

    int ans=0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]=='1')
                height[j]++;
            else
                height[j]=0;
        }

        ans=max(ans,largestRectangleArea(height));
    }

    return ans;
}

int main()
{
    cout<<"Refer LeetCode input.";

    return 0;
}
