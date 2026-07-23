/*
==================================================
Problem      : Inorder Successor in BST
Platform     : LeetCode 285 / GFG

Difficulty   : Medium

Pattern      : BST

Time          : O(h)
Space         : O(1)

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

    TreeNode* inorderSuccessor(TreeNode* root,TreeNode* p)
    {
        TreeNode* ans=NULL;

        while(root)
        {
            if(root->val>p->val)
            {
                ans=root;
                root=root->left;
            }
            else
                root=root->right;
        }

        return ans;
    }
};

int main()
{
    return 0;
}