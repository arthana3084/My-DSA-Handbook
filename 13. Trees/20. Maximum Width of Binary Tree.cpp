/*
==================================================
Problem      : Maximum Width of Binary Tree
Platform     : LeetCode 662

Difficulty   : Medium

Pattern      : BFS

Time          : O(n)
Space         : O(n)

Status              : ⭐ Must Revise
Frequently Asked    : ⭐⭐⭐⭐⭐
==================================================
*/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left,*right;

    TreeNode(int x)
    {
        val=x;
        left=right=NULL;
    }
};

class Solution
{
public:

    int widthOfBinaryTree(TreeNode* root)
    {
        if(root==NULL)
            return 0;

        long long ans=0;

        queue<pair<TreeNode*,long long>> q;

        q.push({root,0});

        while(!q.empty())
        {
            int size=q.size();

            long long mini=q.front().second;
            long long first,last;

            for(int i=0;i<size;i++)
            {
                auto cur=q.front();
                q.pop();

                long long idx=cur.second-mini;

                if(i==0)
                    first=idx;

                if(i==size-1)
                    last=idx;

                if(cur.first->left)
                    q.push({cur.first->left,2*idx+1});

                if(cur.first->right)
                    q.push({cur.first->right,2*idx+2});
            }

            ans=max(ans,last-first+1);
        }

        return ans;
    }
};

int main()
{
    return 0;
}