/*
==================================================
Problem      : Binary Tree Zigzag Level Order Traversal
Platform     : LeetCode 103
Difficulty   : Medium

Pattern       : BFS

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

    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int>> ans;

        if(root==NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight=true;

        while(!q.empty())
        {
            int n=q.size();
            vector<int> level(n);

            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();

                int index=leftToRight?i:n-1-i;

                level[index]=node->val;

                if(node->left)
                    q.push(node->left);

                if(node->right)
                    q.push(node->right);
            }

            leftToRight=!leftToRight;

            ans.push_back(level);
        }

        return ans;
    }
};

int main()
{
    return 0;
}