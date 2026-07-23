/*
==================================================
Problem      : Right View of Binary Tree
Platform     : LeetCode 199 / GFG
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

    vector<int> rightSideView(TreeNode* root)
    {
        vector<int> ans;

        if(root==NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size=q.size();

            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();

                if(i==size-1)
                    ans.push_back(node->val);

                if(node->left)
                    q.push(node->left);

                if(node->right)
                    q.push(node->right);
            }
        }

        return ans;
    }
};

int main()
{
    return 0;
}