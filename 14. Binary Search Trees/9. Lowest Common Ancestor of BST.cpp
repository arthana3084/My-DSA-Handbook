/*
==================================================
Problem      : Lowest Common Ancestor of BST
Platform     : LeetCode 235

Difficulty   : Easy

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

    TreeNode* lowestCommonAncestor(TreeNode* root,
                                   TreeNode* p,
                                   TreeNode* q)
    {
        while(root)
        {
            if(p->val<root->val && q->val<root->val)
                root=root->left;

            else if(p->val>root->val && q->val>root->val)
                root=root->right;

            else
                return root;
        }

        return NULL;
    }
};

int main()
{
    return 0;
}